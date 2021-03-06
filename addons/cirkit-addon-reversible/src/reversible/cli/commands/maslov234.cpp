/* CirKit: A circuit toolkit
 * Copyright (C) 2009-2015  University of Bremen
 * Copyright (C) 2015-2017  EPFL
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following
 * conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */

#include "maslov234.hpp"

#include <alice/rules.hpp>
#include <reversible/cli/stores.hpp>
#include <reversible/mapping/maslov_mapping.hpp>

namespace cirkit
{

maslov234_command::maslov234_command( const environment::ptr& env )
  : cirkit_command( env, "Maslov reversible phase gate mapping up to 4 controls", "D. Maslov: Advantages of using relative-phase Toffoli gates with an application to multiple control Toffoli optimization, PRA 93, 022311, 2016" )
{
  add_new_option();
}

command::rules_t maslov234_command::validity_rules() const
{
  return {has_store_element<circuit>( env )};
}

bool maslov234_command::execute()
{
  auto& circuits = env->store<circuit>();
  const auto circ = maslov_mapping( circuits.current() );
  extend_if_new( circuits );
  circuits.current() = circ;

  return true;
}

}

// Local Variables:
// c-basic-offset: 2
// eval: (c-set-offset 'substatement-open 0)
// eval: (c-set-offset 'innamespace 0)
// End:
