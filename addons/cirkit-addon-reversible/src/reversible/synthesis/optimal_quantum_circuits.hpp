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

/**
 * @file optimal_quantum_circuits.hpp
 *
 * @brief Some databases of quantum circuits
 *
 * @author Mathias Soeken
 * @since  2.3
 */

#ifndef OPTIMAL_QUANTUM_CIRCUITS_HPP
#define OPTIMAL_QUANTUM_CIRCUITS_HPP

#include <cstdint>
#include <string>
#include <unordered_map>
#include <vector>

namespace cirkit
{

namespace optimal_quantum_circuits
{

/* affine classification (n = 2, 3, 4) in order of class function value */
/* synthesized by Matthew Amy using Tpar */
const std::vector<std::vector<std::string>> affine_classification = {
  {"",
   "t1 c, H c, Z[4] a, Z[4] b, Z[4] c, t2 b a, t2 c b, t2 a c, Z+[4] b, t2 a b, Z+[4] a, Z+[4] a, Z[4] c, t2 c b, t2 a c, t2 b a, H c",
   "t2 -a c"
  },
  {"",
   "H e,H d,t1 a,t1 b,t1 c,Z[4] e,t2 a b,t2 b e,t2 e a,Z+[4] a,Z[4] e,t2 b a,Z+[4] a,t2 b e,t2 e a,t2 a b,H e,Z[4] e,Z[4] c,Z[4] d,t2 e c,t2 c d,t2 d e,Z+[4] e,Z+[4] c,Z[4] d,t2 c e,Z+[4] e,t2 c d,t2 d e,t2 e c,H e,Z[2] a,Z[2] b,Z[4] e,t2 a b,t2 b e,t2 e a,Z+[4] a,Z+[2] b,Z[4] e,t2 b a,Z+[4] a,t2 b e,t2 e a,t2 a b,t1 a,t1 b,t1 c,H d,H e",
   "H d,t1 a,t1 b,Z[4] a,Z[4] b,Z[4] d,t2 a b,t2 b d,t2 d a,Z+[4] a,Z+[4] b,Z[4] d,t2 b a,Z+[4] a,t2 b d,t2 d a,t2 a b,t1 a,t1 b,H d",
   "H e,H d,t1 a,t1 c,t2 a c,t2 c d,t2 d a,Z+[4] c,Z[4] d,t2 c a,Z+[4] a,t2 c d,t2 d a,t2 a c,t1 c,t1 b,Z[4] e,t2 a b,t2 b e,t2 e a,Z+[4] a,Z[4] e,t2 b a,Z+[4] a,t2 b e,t2 e a,t2 a b,H e,Z[4] e,Z[2] d,t2 e c,t2 c d,t2 d e,Z+[4] c,Z[4] d,t2 c e,Z+[4] e,t2 c d,t2 d e,t2 e c,H e,Z[2] a,Z[4] a,Z[2] b,Z[4] e,t2 a b,t2 b e,t2 e a,Z+[4] a,Z+[2] b,Z[4] e,t2 b a,Z+[4] a,t2 b e,t2 e a,t2 a b,t1 a,t1 b,H d,H e",
   "t1 a,t2 a d,t1 a",
   "H d,t1 b,t1 c,t2 b c,t2 c d,t2 d b,Z+[4] c,Z[4] d,t2 c b,t2 c d,t2 d b,t2 b c,t1 a,Z[2] c,t2 a c,t2 c d,t2 d a,Z+[2] a,Z+[4] c,Z[4] d,t2 c a,t2 c d,t2 d a,t2 a c,t1 c,Z[2] a,Z[2] b,Z[2] d,Z[4] d,t2 a b,t2 b d,t2 d a,Z+[2] a,Z+[4] b,Z[4] d,t2 b a,Z+[2] a,t2 b d,t2 d a,t2 a b,t1 a,t1 b,H d"
  },
  {"",
   "t1 a,H f,Z[4] f,Z+[4] a,t2 a f,t2 f b,t2 f a,Z[4] f,Z[4] a,Z[4] b,t2 a f,t2 b a,t2 f b,t2 f a,t1 a,t1 d,H b,H e,t2 b a,t2 e b,t2 a b,t2 a e,t1 b,t1 a,t1 e,Z[4] b,Z[4] a,Z+[4] e,t2 a b,t2 e b,t2 a e,t2 b a,t2 e a,t2 c d,Z+[2] a,Z c,Z+[2] f,Z+[2] b,Z d,t2 e a,t2 d c,Z[2] a,Z e,Z c,t1 b,H b,t2 d c,t2 b c,t2 b d,t1 d,Z[4] c,Z[4] b,Z[4] d,t2 b c,t2 d c,t2 b d,t2 c d,t2 c b,Z[4] c,t2 d c,H d,t2 e d,t2 a e,t2 e a,t2 d a,t2 d e,Z[4] a,Z+[4] d,Z+[4] e,t2 d a,t2 e a,t2 e d,t2 a d,t2 a e,Z[4] a,t2 e a,t2 d a,H d,t2 c b,t2 d b,t2 d c,t1 c,Z[4] b,Z[4] d,Z[4] c,t2 d b,t2 c b,t2 d c,t2 b c,t2 b d,Z[4] b,t2 c b,t1 f,H c,H a,t2 c f,t2 a c,t2 a e,t2 c e,t1 f,Z[4] a,Z+[4] c,Z+[4] e,Z[4] f,t2 f a,t2 f c,t2 c e,t2 a f,t2 a e,Z[4] c,Z+[4] a,t2 f c,t2 f a,t2 c a,Z[2] a,H f,t2 e a,t2 f a,t2 a e,Z+[4] e,Z[4] a,t2 a e,t2 f a,t2 e a,t2 f e,Z[2] f,Z+[2] e,t2 e f,t2 f e,H a,t2 b d,t2 a d,t2 a b,t1 b,Z[4] d,Z[4] a,Z[4] b,t2 a d,t2 b d,t2 a b,t2 d b,t2 d a,Z[4] d,t2 b d,H b,t2 f b,t2 e f,t2 f e,t2 b e,t2 b f,Z[4] e,Z+[4] b,Z+[4] f,t2 b e,t2 f e,t2 b f,t2 e f,t2 e b,Z[4] e,t2 b e,t2 f e,H e,H f,t2 d a,t2 f a,t2 f d,t1 d,Z[4] a,Z[4] f,Z[4] d,t2 f a,t2 d a,t2 f d,t2 a d,t2 a f,Z[4] a,t2 d a,H d,t2 c a,t2 a c,t2 c a,t2 f d,t2 d f,t2 f b,t2 b f,t2 f b",
   "H f,H e,t2 b a,t2 f a,t2 a b,Z[4] f,Z[4] a,Z[4] b,Z+[4] c,t2 a f,t2 b f,t2 e c,t2 a b,t2 f b,t2 f a,Z[4] e,Z[4] f,Z[4] c,t2 c e,t2 b f,t2 e c,t1 e,H b,t2 b e,t2 b c,t1 e,Z[4] b,Z+[4] c,Z[4] e,t2 c b,t2 e b,t2 e c,t2 b c,t2 b e,Z+[4] b,t2 e b,t2 c b,t1 a,H c,t2 c a,t2 a f,t1 f,Z[4] c,Z[4] a,Z[4] f,t2 a c,t2 f c,t2 a f,t2 c f,t2 c a,Z[4] c,t2 f c,H e,H f,Z+[2] c,t2 a c,Z+[2] c,Z+[2] a,t2 c a,t2 a c,t2 c b,t2 b c,t2 c b,t2 b a,t2 a b,t2 b a",
   "H e,H f,t2 f b,t2 f e,t2 e f,t2 b e,t1 d,t1 f,t1 b,t1 e,Z+[2] a,Z+[4] a,Z[2] d,Z[4] d,Z[4] f,Z[4] b,Z[4] e,t2 d a,t2 f a,t2 b a,t2 e a,t2 f d,t2 e b,t2 d f,t2 d e,t2 d b,t2 a e,Z+[2] d,Z+[4] d,Z[4] a,Z[4] b,Z[4] e,t2 e a,t2 e b,t2 a e,t1 f,H e,t2 e f,t2 e d,t1 f,Z[4] e,Z+[4] d,Z[4] f,t2 d e,t2 f e,t2 f d,t2 e d,t2 e f,Z+[4] e,t2 f e,t2 d e,t1 e,H d,t2 c e,t1 e,Z[2] d,Z b,Z a,Z c,Z e,t2 b d,t2 a d,t2 c e,t2 d a,t2 d b,Z[2] d,Z[2] b,Z[2] a,t2 b d,t2 a b,t2 d a,t2 d b,t1 b,H a,t2 f b,t2 a b,t2 b f,t1 f,t1 b,Z[4] f,Z+[4] b,t2 a f,t2 a b,t2 f b,t2 a b,Z[2] a,Z+[2] b,t2 b a,t2 a b,t1 f,t1 c,H f,t2 e f,t2 e c,t2 f e,t2 f c,t1 c,Z[4] e,Z+[4] f,Z[4] c,t2 f e,t2 c e,t2 c f,t2 e f,t2 e c,Z+[4] e,t2 c e,t2 f e,t1 e,H f,t2 a f,t2 b a,t2 a b,t2 f b,t2 f a,Z[4] b,Z+[4] f,Z+[4] a,t2 f b,t2 a b,t2 f a,t2 b a,t2 b f,Z[4] b,t2 f b,t2 a b,H a,t2 c a,t2 c e,t2 a c,t2 a e,t1 e,Z[4] c,Z+[4] a,Z[4] e,t2 a c,t2 e c,t2 e a,t2 c a,t2 c e,Z+[4] c,t2 e c,t2 a c,t1 d,H a,H f,t2 a d,t2 f a,t2 f b,t2 a b,t1 d,Z[4] f,Z+[4] a,Z+[4] b,Z[4] d,t2 d f,t2 d a,t2 a b,t2 f d,t2 f b,Z[4] a,Z+[4] f,t2 d a,t2 d f,t2 a f,Z[2] f,t1 c,H d,t2 b f,t2 d f,t2 f b,Z+[4] b,Z[4] f,t2 f b,t2 d f,t2 b f,t2 d b,Z[2] d,Z+[2] b,t2 b d,t2 d b,H f,t2 e f,t2 e c,t2 f e,t2 f c,t1 c,Z[4] e,Z+[4] f,Z[4] c,t2 f e,t2 c e,t2 c f,t2 e f,t2 e c,Z+[4] e,t2 c e,t2 f e,t1 e,H f,t2 d f,t2 b d,t2 d b,t2 f b,t2 f d,Z[4] b,Z+[4] f,Z+[4] d,t2 f b,t2 d b,t2 f d,t2 b d,t2 b f,Z[4] b,t2 f b,t2 d b,H b,H d,t2 c d,t2 c e,t2 d c,t2 d e,t1 e,Z[4] c,Z+[4] d,Z[4] e,t2 d c,t2 e c,t2 e d,t2 c d,t2 c e,Z+[4] c,t2 e c,t2 d c,H d,H a,Z[2] a,H a,Z[2] a,H a,Z[2] a,t2 e d,t2 d e,t2 e b,t2 b e,t2 e b",
   "H e,t2 b a,t2 b e,t2 a e,t2 a b,Z+[4] a,Z+[4] b,Z[4] e,t2 b a,t2 e a,t2 e b,t2 a e,Z[4] b,Z[4] a,Z+[4] e,t2 e b,t2 b e,t2 b a,Z[4] b,t2 e b,H e",
   "H f,H e,t2 c a,t2 f a,Z[4] f,Z[4] a,Z+[2] c,Z+[4] c,t2 c f,t2 c a,t2 e c,Z[2] e,Z[4] e,Z[4] a,Z[4] f,Z[4] c,t2 a e,t2 f e,t2 c e,t2 f a,t2 a c,t2 a f,t2 e c,t2 e f,t2 e a,t1 d,H f,t2 f d,t2 f c,t1 d,Z[4] f,Z+[4] c,Z[4] d,t2 c f,t2 d f,t2 d c,t2 f c,t2 f d,Z+[4] f,t2 d f,t2 c f,t2 d f,Z[2] f,Z+[2] b,t2 d f,t1 e,H c,t2 c e,t2 a b,t2 c a,t2 e b,t1 b,t1 a,Z[4] e,Z[4] b,Z[4] a,t2 b e,t2 a e,t2 c a,t2 e b,Z[4] e,t2 c e,t2 a b,t2 a e,t2 b a,t2 b e,Z+[2] b,Z[2] c,Z+[2] e,Z a,Z+[2] f,t2 a b,t2 a c,t2 a e,t2 c a,Z[2] c,t2 a c,t1 b,t1 f,H a,t2 a b,t2 a f,t2 f d,t1 f,t1 d,t1 b,Z[4] f,Z+[4] d,Z[4] b,t2 d f,t2 b f,t2 b d,t2 a d,t2 f b,t2 f d,Z+[4] f,t2 b f,t2 a f,t2 a b,Z[2] a,Z+[2] b,t2 b a,t2 a b,t1 c,H b,t2 b c,t2 c e,t1 e,Z[4] b,Z[4] c,Z[4] e,t2 c b,t2 e b,t2 c e,t2 b e,t2 b c,Z[4] b,t2 e b,H a,H e,t2 e a,t2 a e,t2 e a,t2 a c,t2 c a,t2 a c,t2 c f,t2 f c,t2 c f",
   "t1 a,H e,t2 e a,t2 e f,t2 b f,t2 a f,t1 b,t1 f,Z+[2] e,Z+[4] e,Z[4] a,Z[4] b,Z+[2] f,Z+[4] f,t2 b a,t2 a f,t2 e f,Z[4] a,t2 e a,t1 a,H f,t2 f a,t2 f b,t1 a,Z[4] f,Z+[4] b,Z[4] a,t2 b f,t2 a f,t2 a b,t2 f b,t2 f a,Z+[4] f,t2 a f,t2 b f,H b,t2 e a,t2 b a,t2 a e,Z+[4] e,Z[4] a,t2 b e,t2 b a,t2 e a,t2 b a,Z[2] b,Z+[2] a,Z d,t2 a b,t2 b a,H e,t2 c d,t2 e d,t2 e c,t1 c,Z[4] d,Z[4] e,Z[4] c,t2 e d,t2 c d,t2 e c,t2 d c,t2 d e,Z[4] d,t2 c d,t2 d e,Z e,Z d,H c,t2 b c,t2 a b,t2 b a,t2 c a,t2 c b,Z[4] a,Z+[4] c,Z+[4] b,t2 c a,t2 b a,t2 c b,t2 a b,t2 a c,Z[4] a,t2 c a,t2 b a,H b,t2 b e,t2 b d,t1 d,Z[4] e,Z[4] b,Z[4] d,t2 b e,t2 d e,t2 b d,t2 e d,t2 e b,Z[4] e,t2 d e,t1 f,H d,H c,t2 d f,t2 c d,t2 c a,t2 d a,t1 f,Z[4] c,Z+[4] d,Z+[4] a,Z[4] f,t2 f c,t2 f d,t2 d a,t2 c f,t2 c a,Z[4] d,Z+[4] c,t2 f d,t2 f c,t2 d c,Z[2] c,H f,t2 a c,t2 f c,t2 c a,Z+[4] a,Z[4] c,t2 c a,t2 f c,t2 a c,t2 f a,Z[2] f,Z+[2] a,t2 a f,t2 f a,H c,t2 e b,t2 c b,t2 c e,t1 e,Z[4] b,Z[4] c,Z[4] e,t2 c b,t2 e b,t2 c e,t2 b e,t2 b c,Z[4] b,t2 e b,H e,t2 f e,t2 a f,t2 f a,t2 e a,t2 e f,Z[4] a,Z+[4] e,Z+[4] f,t2 e a,t2 f a,t2 e f,t2 a f,t2 a e,Z[4] a,t2 e a,t2 f a,H a,H f,t2 b c,t2 f c,t2 f b,t1 b,Z[4] c,Z[4] f,Z[4] b,t2 f c,t2 b c,t2 f b,t2 c b,t2 c f,Z[4] c,t2 b c,H b,t2 d f,t2 f d,t2 d f,t2 f e,t2 e f,t2 f e,t2 e a,t2 a e,t2 e a",
   "H f,H e,t2 c a,t2 c b,t2 f b,t2 a c,t2 a b,Z+[4] a,Z[4] f,Z[4] b,Z+[2] c,Z+[4] c,t2 e a,t2 c f,t2 c b,t2 e c,Z[4] a,Z[4] c,Z[4] f,Z[4] b,t2 c a,t2 f c,t2 b c,t2 e c,t2 b f,t2 c b,Z[2] e,Z+[2] f,Z+[2] c,t2 c f,H b,t2 b a,t2 b e,Z[4] b,Z+[4] a,Z+[4] e,t2 a b,t2 e b,t2 a e,t2 b e,t2 b a,Z[4] b,t2 a b,t2 e b,t1 f,H e,t2 e f,t2 f c,t1 c,Z[4] e,Z[4] f,Z[4] c,t2 f e,t2 c e,t2 f c,t2 e c,t2 e f,Z[4] e,t2 c e,H a,H c,t2 c b,t2 b c,t2 c b,t2 b e,t2 e b,t2 b e,t2 e a,t2 a e,t2 e a,t2 a f,t2 f a,t2 a f",
   "t2 a e,t1 a,t1 e,H f,t2 b a,t2 f b,t2 f e,t2 b e,t2 a e,t1 a,Z[4] f,Z+[4] b,Z[4] a,t2 a f,t2 a b,t2 f a,Z[4] b,Z+[4] f,t2 a b,t2 a f,t2 b f,t2 b e,t1 e,H a,H e,t2 a f,t2 e a,t2 f a,t2 f e,Z+[4] a,Z+[4] f,Z[4] e,t2 f a,t2 e a,t2 f e,t2 a f,t2 d c,t2 e f,Z[2] a,Z+[2] f,Z d,Z c,Z+[2] b,t2 e f,t2 c d,t2 d c,Z[2] f,Z e,Z d,H a,t2 c a,t2 c d,t2 a c,t2 a d,Z[4] c,Z+[4] a,Z+[4] d,t2 a c,t2 d c,t2 d a,t2 c a,t2 c d,Z[4] c,t2 d c,t2 a c,H a,t2 e a,t2 f e,t2 e f,t2 a f,t2 a e,Z[4] f,Z+[4] a,Z+[4] e,t2 a f,t2 e f,t2 e a,t2 f a,t2 f e,Z[4] f,t2 e f,t2 a f,H a,t2 d a,t2 d c,t2 a d,t2 a c,Z[4] d,Z+[4] a,Z+[4] c,t2 a d,t2 c d,t2 c a,t2 d a,t2 d c,Z[4] d,t2 c d,t2 a d,t1 b,H a,H f,t2 a b,t2 f a,t2 f e,t2 a e,t1 b,Z[4] f,Z+[4] a,Z+[4] e,Z[4] b,t2 b f,t2 b a,t2 a e,t2 f b,t2 f e,Z[4] a,Z+[4] f,t2 b a,t2 b f,t2 a f,Z[2] f,H b,t2 e f,t2 b f,t2 f e,Z+[4] e,Z[4] f,t2 f e,t2 b f,t2 e f,t2 b e,Z[2] b,Z+[2] e,t2 e b,t2 b e,H f,t2 c f,t2 c d,t2 f c,t2 f d,Z[4] c,Z+[4] f,Z+[4] d,t2 f c,t2 d c,t2 d f,t2 c f,t2 c d,Z[4] c,t2 d c,t2 f c,H f,t2 b f,t2 e b,t2 b e,t2 f e,t2 f b,Z[4] e,Z+[4] f,Z+[4] b,t2 f e,t2 b e,t2 f b,t2 e b,t2 e f,Z[4] e,t2 f e,t2 b e,H e,H b,t2 d b,t2 d c,t2 b d,t2 b c,Z[4] d,Z+[4] b,Z+[4] c,t2 b d,t2 c d,t2 c b,t2 d b,t2 d c,Z[4] d,t2 c d,t2 b d,H b,t2 d c,t2 c d,t2 d c",
   "t1 a,t2 a e,t1 a",
   "t1 c,H e,H f,t2 f b,t2 f e,t2 e f,t2 b e,t1 a,t1 d,t1 f,t1 b,t1 e,Z+[2] a,Z+[4] a,Z+[4] d,Z+[2] f,Z+[4] f,Z[4] b,Z[4] e,t2 d a,t2 f a,t2 e a,t2 f d,t2 b d,t2 e d,t2 b f,t2 e f,t2 e b,t2 b e,t2 d f,t2 d b,t2 d c,Z[4] b,Z[4] d,Z[4] e,Z[4] c,t2 c d,t2 c e,t2 d c,t1 f,H c,t2 c f,t2 c b,t1 f,Z[4] c,Z+[4] b,Z[4] f,t2 b c,t2 f c,t2 f b,t2 c b,t2 c f,Z+[4] c,t2 f c,t2 b c,t1 e,H b,t2 b e,t2 b d,t1 d,Z[4] b,Z[4] e,Z[4] d,t2 e b,t2 d b,t2 e d,t2 b d,t2 b e,Z[4] b,t2 d b,t1 c,H d,t2 d c,t2 d f,t1 c,Z[4] d,Z+[4] f,Z[4] c,t2 f d,t2 c d,t2 c f,t2 d f,t2 d c,Z+[4] d,t2 c d,t2 f d,t1 a,H f,t2 f a,t2 f e,t1 e,Z[4] f,Z[4] a,Z[4] e,t2 a f,t2 e f,t2 a e,t2 f e,t2 f a,Z[4] f,t2 e f,t1 d,H e,t2 e d,t2 e c,t1 d,Z[4] e,Z+[4] c,Z[4] d,t2 c e,t2 d e,t2 d c,t2 e c,t2 e d,Z+[4] e,t2 d e,t2 c e,t1 f,H c,t2 c f,t2 c a,t1 a,Z[4] c,Z[4] f,Z[4] a,t2 f c,t2 a c,t2 f a,t2 c a,t2 c f,Z[4] c,t2 a c,t1 f,t1 e,H a,t2 a e,t2 a d,t1 e,Z[4] a,Z+[4] d,Z[4] e,t2 d a,t2 e a,t2 e d,t2 a d,t2 a e,Z+[4] a,t2 e a,t2 d a,t1 c,t1 a,H d,t2 d c,t2 d b,t1 b,Z[4] d,Z[4] c,Z[4] b,t2 c d,t2 b d,t2 c b,t2 d b,t2 d c,Z[4] d,t2 b d,H b,t2 b a,t2 b e,t1 a,Z[4] b,Z+[4] e,Z[4] a,t2 e b,t2 a b,t2 a e,t2 b e,t2 b a,Z+[4] b,t2 a b,t2 e b,t1 b,H e,t2 e f,t2 e b,t2 f b,t1 d,t1 c,t1 e,t1 f,t1 b,Z+[2] d,Z[2] c,Z[2] e,Z[2] f,Z b,t2 e d,t2 f d,t2 e c,t2 f e,t2 f b,t2 e b,t2 c b,t2 c f,t2 c e,t2 d b,Z+[2] d,Z[2] c,Z[2] e,Z[2] f,t2 c d,t2 e d,t2 f d,t2 e c,t2 f c,t2 f e,t2 c e,t1 c,H e,t2 a c,t2 e c,t2 c a,t1 a,t1 c,Z[4] a,Z+[4] c,t2 e a,t2 e c,t2 a c,t2 e c,Z[2] e,Z+[2] c,t2 c e,t2 e c,t1 a,t1 d,H a,t2 b a,t2 b d,t2 a b,t2 a d,t1 d,Z[4] b,Z+[4] a,Z[4] d,t2 a b,t2 d b,t2 d a,t2 b a,t2 b d,Z+[4] b,t2 d b,t2 a b,t1 b,H a,t2 e a,t2 c e,t2 e c,t2 a c,t2 a e,Z[4] c,Z+[4] a,Z+[4] e,t2 a c,t2 e c,t2 a e,t2 c e,t2 c a,Z[4] c,t2 a c,t2 e c,H e,t2 d e,t2 d b,t2 e d,t2 e b,t1 b,Z[4] d,Z+[4] e,Z[4] b,t2 e d,t2 b d,t2 b e,t2 d e,t2 d b,Z+[4] d,t2 b d,t2 e d,t1 f,H e,H a,t2 e f,t2 a e,t2 a c,t2 e c,t1 f,Z[4] a,Z+[4] e,Z+[4] c,Z[4] f,t2 f a,t2 f e,t2 e c,t2 a f,t2 a c,Z[4] e,Z+[4] a,t2 f e,t2 f a,t2 e a,Z[2] a,t1 d,H f,t2 c a,t2 f a,t2 a c,Z+[4] c,Z[4] a,t2 a c,t2 f a,t2 c a,t2 f c,Z[2] f,Z+[2] c,t2 c f,t2 f c,H a,t2 b a,t2 b d,t2 a b,t2 a d,t1 d,Z[4] b,Z+[4] a,Z[4] d,t2 a b,t2 d b,t2 d a,t2 b a,t2 b d,Z+[4] b,t2 d b,t2 a b,t1 b,H a,t2 f a,t2 c f,t2 f c,t2 a c,t2 a f,Z[4] c,Z+[4] a,Z+[4] f,t2 a c,t2 f c,t2 a f,t2 c f,t2 c a,Z[4] c,t2 a c,t2 f c,H c,H f,t2 d f,t2 d b,t2 f d,t2 f b,t1 b,Z[4] d,Z+[4] f,Z[4] b,t2 f d,t2 b d,t2 b f,t2 d f,t2 d b,Z+[4] d,t2 b d,t2 f d,H f,t1 f,H e,Z[2] e,H e,Z[2] e,H e,Z[2] e,t2 e c,t2 c e,t2 e c,t2 c d,t2 d c,t2 c d,t2 d b,t2 b d,t2 d b,t2 b f,t2 f b,t2 b f,t2 f a,t2 a f,t2 f a",
   "H f,H e,t2 b a,t2 f c,t2 b e,t2 a e,Z[4] f,Z+[4] a,Z+[2] b,Z+[4] b,Z[4] c,Z[4] e,t2 b f,t2 b a,t2 e a,t2 e b,t2 e c,t2 b c,t2 a e,Z[4] c,Z[2] a,Z[4] a,Z[4] b,Z[4] f,Z+[2] e,Z+[4] e,t2 f c,t2 b a,t2 e a,t2 e b,t2 a b,t2 a f,t1 a,t1 d,H f,t2 b a,t2 f d,t2 f b,t1 d,t1 a,Z[4] f,Z+[4] b,Z[4] d,Z[4] a,t2 b f,t2 d f,t2 d b,t2 a d,t2 d a,t2 f b,t2 f a,t2 f d,Z+[4] f,t2 a f,t2 b f,t2 c e,t2 c d,t2 f a,Z+[2] d,Z+[2] e,Z c,Z+[2] f,Z[2] a,t2 c d,t2 c e,t2 f a,t1 d,t1 f,H b,t2 b e,t2 c d,t2 b d,t2 d c,t1 e,t1 c,Z[4] d,Z[4] e,Z[4] c,t2 e d,t2 c d,t2 b c,t2 d e,Z[4] d,t2 b d,t2 b e,Z[2] b,Z[2] e,t2 e b,t2 b e,H e,t2 e f,t2 e a,t1 f,Z[4] e,Z+[4] a,Z[4] f,t2 a e,t2 f e,t2 f a,t2 e a,t2 e f,Z+[4] e,t2 f e,t2 a e,t1 d,H a,t2 a d,t2 d b,t1 b,Z[4] a,Z[4] d,Z[4] b,t2 d a,t2 b a,t2 d b,t2 a b,t2 a d,Z[4] a,t2 b a,H f,H b,t2 b c,t2 c b,t2 b c,t2 c a,t2 a c,t2 c a,t2 a d,t2 d a,t2 a d,t2 d e,t2 e d,t2 d e,t2 e f,t2 f e,t2 e f",
   "H e,t2 c b,t2 f e,t2 e f,t2 c e,t2 a c,t2 a b,t2 a f,t1 b,t1 c,t1 e,Z+[4] a,Z[4] f,Z+[4] b,Z+[4] c,Z[4] e,t2 c a,t2 c f,t2 c b,t2 c e,t2 f e,t2 a e,t2 a f,t2 d a,t2 d e,t2 a d,Z+[2] f,Z d,Z a,Z b,Z e,t2 a e,t2 d e,t2 d a,t1 c,H e,t2 e c,t2 e b,t2 e f,t2 b f,t1 b,t1 f,Z[4] e,Z[4] c,Z[4] b,Z[4] f,t2 c e,t2 b e,t2 c b,t2 c f,t2 e b,t2 e f,t2 e c,Z[4] e,t2 b e,t1 c,H b,t2 b d,t2 b f,Z[4] b,Z+[4] f,Z+[4] d,t2 f b,t2 d b,t2 d f,t2 b f,t2 b d,Z[4] b,t2 d b,t2 f b,H f,t2 f c,t1 c,Z[2] f,Z[2] c,t2 c f,t2 f c,t1 f,H c,t2 d f,t2 c f,t2 f d,t1 d,t1 f,Z[4] d,Z+[4] f,t2 c d,t2 c f,t2 d f,t2 c f,Z[2] c,Z+[2] f,t2 f c,t2 c f,t1 d,H d,t2 b a,t2 d a,t2 d b,t1 b,Z[4] a,Z[4] d,Z[4] b,t2 d a,t2 b a,t2 d b,t2 a b,t2 a d,Z[4] a,t2 b a,H b,t2 c b,t2 f c,t2 c f,t2 b f,t2 b c,Z[4] f,Z+[4] b,Z+[4] c,t2 b f,t2 c f,t2 b c,t2 f c,t2 f b,Z[4] f,t2 b f,t2 c f,H c,t2 a d,t2 c d,t2 c a,t1 a,Z[4] d,Z[4] c,Z[4] a,t2 c d,t2 a d,t2 c a,t2 d a,t2 d c,Z[4] d,t2 a d,H a,H b,t2 a e,t2 b a,t2 b f,t2 a f,Z[4] b,Z+[4] a,Z+[4] e,Z+[4] f,t2 e b,t2 e a,t2 a f,t2 b e,t2 b f,Z+[4] a,Z[4] b,t2 e a,t2 e b,t2 a b,Z[2] b,H e,t2 f b,t2 e b,t2 b f,Z+[4] f,Z[4] b,t2 b f,t2 e b,t2 f b,t2 e f,Z[2] e,Z+[2] f,t2 f e,t2 e f,H b,t2 d c,t2 b c,t2 b d,t1 d,Z[4] c,Z[4] b,Z[4] d,t2 b c,t2 d c,t2 b d,t2 c d,t2 c b,Z[4] c,t2 d c,H d,t2 e d,t2 f e,t2 e f,t2 d f,t2 d e,Z[4] f,Z+[4] d,Z+[4] e,t2 d f,t2 e f,t2 d e,t2 f e,t2 f d,Z[4] f,t2 d f,t2 e f,H f,H e,t2 c b,t2 e b,t2 e c,t1 c,Z[4] b,Z[4] e,Z[4] c,t2 e b,t2 c b,t2 e c,t2 b c,t2 b e,Z[4] b,t2 c b,H c,H a,Z[2] a,H a,Z[2] a,H a,Z[2] a,t2 b c,t2 c b,t2 e f,t2 f e,t2 e f,t2 f d,t2 d f,t2 f d",
   "t2 a e,t1 a,t1 e,H f,t2 b a,t2 f b,t2 f e,t2 b e,t2 a e,t1 a,Z[4] f,Z+[4] b,Z[4] a,t2 a f,t2 a b,t2 f a,Z[4] b,Z+[4] f,t2 a b,t2 a f,t2 b f,t2 b e,t1 e,H a,H e,t2 a f,t2 e a,t2 f a,t2 f e,Z+[4] a,Z+[4] f,Z[4] e,t2 f a,t2 e a,t2 f e,t2 a f,t2 e f,t2 f e,Z[2] a,Z[2] e,Z+[2] f,t2 f e,t2 e f,H a,t2 d a,t2 d c,t2 a d,t2 a c,Z[4] d,Z+[4] a,Z+[4] c,t2 a d,t2 c d,t2 c a,t2 d a,t2 d c,Z[4] d,t2 c d,t2 a d,H a,t2 e a,t2 f e,t2 e f,t2 a f,t2 a e,Z[4] f,Z+[4] a,Z+[4] e,t2 a f,t2 e f,t2 e a,t2 f a,t2 f e,Z[4] f,t2 e f,t2 a f,H a,t2 c a,t2 c d,t2 a c,t2 a d,Z[4] c,Z+[4] a,Z+[4] d,t2 a c,t2 d c,t2 d a,t2 c a,t2 c d,Z[4] c,t2 d c,t2 a c,t1 b,H a,H f,t2 a b,t2 f a,t2 f e,t2 a e,t1 b,Z[4] f,Z+[4] a,Z+[4] e,Z[4] b,t2 b f,t2 b a,t2 a e,t2 f b,t2 f e,Z[4] a,Z+[4] f,t2 b a,t2 b f,t2 a f,Z[2] f,H b,t2 e f,t2 b f,t2 f e,Z+[4] e,Z[4] f,t2 f e,t2 b f,t2 e f,t2 b e,Z[2] b,Z+[2] e,t2 e b,t2 b e,H f,t2 d f,t2 d c,t2 f d,t2 f c,Z[4] d,Z+[4] f,Z+[4] c,t2 f d,t2 c d,t2 c f,t2 d f,t2 d c,Z[4] d,t2 c d,t2 f d,H f,t2 b f,t2 e b,t2 b e,t2 f e,t2 f b,Z[4] e,Z+[4] f,Z+[4] b,t2 f e,t2 b e,t2 f b,t2 e b,t2 e f,Z[4] e,t2 f e,t2 b e,H b,t2 c b,t2 c d,t2 b c,t2 b d,Z[4] c,Z+[4] b,Z+[4] d,t2 b c,t2 d c,t2 d b,t2 c b,t2 c d,Z[4] c,t2 d c,t2 b c,H b,t1 b,H f,t2 f a,t2 f b,t2 f e,t2 b e,t2 a b,t1 b,t1 e,Z[4] f,Z+[4] a,Z[4] b,Z[4] e,t2 b f,t2 b a,t2 e b,t2 b e,t2 a b,t2 f e,t2 f b,Z[4] a,Z+[4] f,t2 f a,t2 e f,t2 a f,Z+[2] f,t1 f,H e,t2 b f,t2 e f,t2 f b,t1 b,t1 f,Z[4] b,Z+[4] f,t2 f b,t2 e f,t2 b f,t2 e b,Z[2] e,Z+[2] b,t2 b e,t2 e b,t1 f,H f,t2 c d,t2 f d,t2 f c,t1 c,Z[4] d,Z[4] f,Z[4] c,t2 f d,t2 c d,t2 f c,t2 d c,t2 d f,Z[4] d,t2 c d,H c,t2 e c,t2 b e,t2 e b,t2 c b,t2 c e,Z[4] b,Z+[4] c,Z+[4] e,t2 c b,t2 e b,t2 c e,t2 b e,t2 b c,Z[4] b,t2 c b,t2 e b,H e,t2 d f,t2 e f,t2 e d,t1 d,Z[4] f,Z[4] e,Z[4] d,t2 e f,t2 d f,t2 e d,t2 f d,t2 f e,Z[4] f,t2 d f,H d,H c,t2 d a,t2 c d,t2 c b,t2 d b,Z[4] c,Z+[4] d,Z+[4] a,Z+[4] b,t2 a c,t2 a d,t2 d b,t2 c a,t2 c b,Z+[4] d,Z[4] c,t2 a d,t2 a c,t2 d c,Z[2] c,H a,t2 b c,t2 a c,t2 c b,Z+[4] b,Z[4] c,t2 c b,t2 a c,t2 b c,t2 a b,Z[2] a,Z+[2] b,t2 b a,t2 a b,H c,t2 f e,t2 c e,t2 c f,t1 f,Z[4] e,Z[4] c,Z[4] f,t2 c e,t2 f e,t2 c f,t2 e f,t2 e c,Z[4] e,t2 f e,H f,t2 a f,t2 b a,t2 a b,t2 f b,t2 f a,Z[4] b,Z+[4] f,Z+[4] a,t2 f b,t2 a b,t2 f a,t2 b a,t2 b f,Z[4] b,t2 f b,t2 a b,H b,H a,t2 e c,t2 a c,t2 a e,t1 e,Z[4] c,Z[4] a,Z[4] e,t2 a c,t2 e c,t2 a e,t2 c e,t2 c a,Z[4] c,t2 e c,H e,t2 d a,t2 a d,t2 d a,t2 b e,t2 e b",
   "H e,t2 c a,t2 c b,t2 a e,Z+[4] b,Z+[4] a,Z[4] e,t2 a b,t2 e b,t2 e a,t2 b e,Z[2] a,Z[4] a,Z[4] b,Z+[4] e,t2 e a,t2 e b,t2 c b,t2 a e,t2 a b,Z[4] a,t2 b a,t2 e a,t2 e b,t2 b e,Z+[2] e,Z+[2] c,Z[2] b,Z+[2] a,t2 c e,t2 b e,t2 a c,t2 a b,t2 c a,t2 c b,t2 e a,t2 e b,t2 e c,Z[2] e,Z[2] c,t2 a e,t2 a c,H a,t2 c e,t2 e c,t2 c e,t2 e a,t2 a e,t2 e a",
   "H e,t2 d a,t2 c b,t2 c e,t2 b e,t2 b c,t2 a d,Z+[4] b,Z+[4] a,Z+[4] c,Z[4] e,Z+[4] d,t2 c b,t2 e b,t2 c a,t2 e a,t2 e d,t2 c d,t2 a d,t2 b c,t2 b e,Z[4] b,Z[4] a,Z+[4] e,Z[4] c,Z+[4] d,t2 c b,t2 d a,t2 c e,t2 d e,t2 d c,t2 e d,t2 e c,Z[4] a,Z[4] e,t2 d a,t2 d e,Z[2] d,H d,t2 e d,t2 d e,t2 e d",
   "H e,t2 c f,t2 b c,t1 c,t1 f,t1 a,Z+[4] e,Z+[4] b,Z[4] c,Z+[2] f,Z+[4] f,Z[4] a,t2 b e,t2 a c,t2 a f,t2 c f,t2 c a,t2 b f,t2 e b,t2 e a,Z[4] e,Z[4] a,t2 a e,t2 b a,t1 c,H f,t2 f c,t2 f e,t1 c,Z[4] f,Z+[4] e,Z[4] c,t2 e f,t2 c f,t2 c e,t2 f e,t2 f c,Z+[4] f,t2 c f,t2 e f,H e,t2 b c,t2 e c,t2 c b,Z+[4] b,Z[4] c,t2 e b,t2 e c,t2 b c,t2 e c,Z[2] e,Z+[2] c,Z[2] f,t2 c e,t2 e c,H b,t2 a d,t2 b d,t2 b a,t1 a,Z[4] d,Z[4] b,Z[4] a,t2 b d,t2 a d,t2 b a,t2 d a,t2 d b,Z[4] d,t2 a d,t2 b d,t2 b e,Z d,Z f,Z[2] b,Z[2] e,t2 b d,t2 b e,H a,t2 e a,t2 c e,t2 e c,t2 a c,t2 a e,Z[4] c,Z+[4] a,Z+[4] e,t2 a c,t2 e c,t2 a e,t2 c e,t2 c a,Z[4] c,t2 a c,t2 e c,H e,t2 d b,t2 e b,t2 e d,t1 d,Z[4] b,Z[4] e,Z[4] d,t2 e b,t2 d b,t2 e d,t2 b d,t2 b e,Z[4] b,t2 d b,t1 f,H d,H a,t2 d f,t2 a d,t2 a c,t2 d c,t1 f,Z[4] a,Z+[4] d,Z+[4] c,Z[4] f,t2 f a,t2 f d,t2 d c,t2 a f,t2 a c,Z[4] d,Z+[4] a,t2 f d,t2 f a,t2 d a,Z[2] a,H f,t2 f a,t2 f c,Z[2] f,Z[4] f,Z+[4] a,Z+[2] c,Z+[4] c,t2 a f,t2 c f,t2 c a,t2 e a,t2 e c,t2 a e,t2 f e,t2 f a,Z[4] f,Z[4] a,Z+[4] c,t2 a f,t2 c f,t2 e f,t2 e a,t2 e c,t2 a c,H f,t2 b a,t2 f a,t2 f b,t1 b,Z[4] a,Z[4] f,Z[4] b,t2 f a,t2 b a,t2 f b,t2 a b,t2 a f,Z[4] a,t2 b a,H b,t2 c b,t2 e c,t2 c e,t2 b e,t2 b c,Z[4] e,Z+[4] b,Z+[4] c,t2 b e,t2 c e,t2 b c,t2 e c,t2 e b,Z[4] e,t2 b e,t2 c e,H c,t2 a f,t2 c f,t2 c a,t1 a,Z[4] f,Z[4] c,Z[4] a,t2 c f,t2 a f,t2 c a,t2 f a,t2 f c,Z[4] f,t2 a f,H a,H b,t2 b d,t2 b f,t1 d,Z[4] b,Z+[4] f,Z[4] d,t2 f b,t2 d b,t2 d f,t2 b f,t2 b d,Z+[4] b,t2 d b,t2 f b,H f,t2 f c,t2 f e,t1 c,Z[4] f,Z+[4] e,Z[4] c,t2 e f,t2 c f,t2 c e,t2 f e,t2 f c,Z+[4] f,t2 c f,t2 e f,t1 b,H c,H e,t2 e b,t2 e d,t1 b,Z[4] e,Z+[4] d,Z[4] b,t2 d e,t2 b e,t2 b d,t2 e d,t2 e b,Z+[4] e,t2 b e,t2 d e,t1 f,H d,t2 e c,t2 c e,t2 e c,t2 c b,t2 b c,t2 c b,t2 b a,t2 a b,t2 b a,t2 d f,t2 f d",
   "H f,H e,t2 b a,t2 f a,t2 c b,t2 b c,Z+[4] b,Z[4] f,Z[4] a,Z+[4] c,Z+[4] d,t2 e b,t2 c f,t2 c a,t2 e c,t2 e d,Z[2] e,Z[4] e,Z[4] b,Z[4] c,Z[4] a,Z[4] f,Z[4] d,t2 c e,t2 a e,t2 f e,t2 c b,t2 a c,t2 f c,t2 d c,t2 f a,t2 a f,t2 c d,t2 e d,t2 e f,t2 e c,t2 e a,H f,t2 f b,t2 f d,Z[4] f,Z+[4] b,Z+[4] d,t2 b f,t2 d f,t2 b d,t2 f d,t2 f b,Z[4] f,t2 b f,t2 d f,H d,Z[2] d,Z e,t2 e d,t2 d e,Z[2] d,t2 e d,t1 c,H e,t2 e c,t2 e b,t1 c,Z[4] e,Z+[4] b,Z[4] c,t2 b e,t2 c e,t2 c b,t2 e b,t2 e c,Z+[4] e,t2 c e,t2 b e,t1 d,H b,t2 b d,t2 b a,t1 d,Z[4] b,Z+[4] a,Z[4] d,t2 a b,t2 d b,t2 d a,t2 b a,t2 b d,Z+[4] b,t2 d b,t2 a b,H a,H c,t2 a b,t2 b a,t2 a b,t2 b d,t2 d b,t2 b d,t2 d e,t2 e d,t2 d e,t2 e c,t2 c e,t2 e c,t2 c f,t2 f c,t2 c f"
  }
};

const std::vector<std::vector<unsigned>> affine_classification_tcount = {
  {0, 7, 0},
  {0, 15, 7, 16, 0, 7},
  {0, 40, 15, 47, 7, 23, 43, 16, 40, 0, 79, 27, 48, 140, 7, 12, 61, 23}
};

const std::vector<std::unordered_map<uint64_t, unsigned>> affine_classification_index = {
    {{0x0, 0}, {0x1, 1}, {0x3, 2}},
    {{0x00, 0}, {0x01, 1}, {0x03, 2}, {0x07, 3}, {0x0f, 4}, {0x17, 5}},
    {{0x0000, 0},{0x0001, 1},{0x0003, 2},{0x0007, 3},{0x000f, 4},{0x0017, 5},{0x001f, 6},{0x003f, 7},{0x007f, 8},{0x00ff, 9},{0x0117, 10},{0x011f, 11},{0x013f, 12},{0x017f, 13},{0x033f, 14},{0x0356, 15},{0x0357, 16},{0x035f, 17}}
};

const std::vector<std::vector<unsigned>> spectral_classification_tcount = {
  {0, 7},
  {0, 16, 7},
  {0, 24, 16, 31, 7, 15, 36, 12},
  {0, 31, 24, 47, 16, 72, 95, 47, 64, 80, 96, 71, 99, 87, 111, 59, 39, 64, 96, 60, 93, 112, 80, 96, 96, 98, 122, 84, 104, 75, 76, 96, 43, 96, 104, 107, 120, 97, 95, 104, 104, 104, 107, 72, 43, 96, 80, 104}
};

const std::vector<std::vector<unsigned>> spectral_classification_representative = {
  {0x0, 0x8},
  {0x00, 0x80, 0x88},
  {0x0000, 0x8000, 0x8080, 0x0888, 0x8888, 0x7080, 0x7880, 0x7888},
  {0xaa55aa55, 0xaa55ab55, 0xaa55bb55, 0xaa5dbb55, 0xaaddbb55, 0xaa5dbb51, 0x2a5dbb51, 0xaaddbb51  , 0x2a5dbf51, 0x6a5dbb51, 0x2addbb51, 0xa8ddbb51, 0xaeddda51, 0x0a5dbf51, 0x8addda51, 0xa8dd9b51, 0x88ddbb51, 0x88ddbb11, 0x8c5dda51, 0xa89d9b51, 0x8eddda51, 0xaefdda51, 0x025dbf51, 0x88ddda51, 0x88dd9b51, 0xceddda51, 0x0eddda51, 0x425dbf51, 0x8cddda51, 0x88dddb51, 0x289d9b51, 0x86fdda51, 0x88dddb71, 0xcefdda51, 0x0efdda51, 0x288d9b51, 0x8cfdda51, 0x8cdddb51, 0x8ccdda51, 0x289d9b41, 0x488ddb51, 0xccfdda51, 0x688d9b51, 0x288d9b41, 0x288d1b41, 0xdcfdda51, 0x68ad9b51, 0x688ddb51}
};

const std::vector<std::unordered_map<uint64_t, unsigned>> spectral_classification_index = {
  {{0x0, 0}, {0x8, 1}},
  {{0x00, 0}, {0x80, 1}, {0x88, 2}},
  {{0x0000, 0}, {0x8000, 1}, {0x8080, 2}, {0x0888, 3}, {0x8888, 4}, {0x7080, 5}, {0x7880, 6}, {0x7888, 7}},
  {{0xaa55aa55, 0}, {0xaa55ab55, 1}, {0xaa55bb55, 2}, {0xaa5dbb55, 3}, {0xaaddbb55, 4}, {0xaa5dbb51, 5}, {0x2a5dbb51, 6}, {0xaaddbb51, 7}, {0x2a5dbf51, 8}, {0x6a5dbb51, 9}, {0x2addbb51, 10}, {0xa8ddbb51, 11}, {0xaeddda51, 12}, {0x0a5dbf51, 13}, {0x8addda51, 14}, {0xa8dd9b51, 15}, {0x88ddbb51, 16}, {0x88ddbb11, 17}, {0x8c5dda51, 18}, {0xa89d9b51, 19}, {0x8eddda51, 20}, {0xaefdda51, 21}, {0x025dbf51, 22}, {0x88ddda51, 23}, {0x88dd9b51, 24}, {0xceddda51, 25}, {0x0eddda51, 26}, {0x425dbf51, 27}, {0x8cddda51, 28}, {0x88dddb51, 29}, {0x289d9b51, 30}, {0x86fdda51, 31}, {0x88dddb71, 32}, {0xcefdda51, 33}, {0x0efdda51, 34}, {0x288d9b51, 35}, {0x8cfdda51, 36}, {0x8cdddb51, 37}, {0x8ccdda51, 38}, {0x289d9b41, 39}, {0x488ddb51, 40}, {0xccfdda51, 41}, {0x688d9b51, 42}, {0x288d9b41, 43}, {0x288d1b41, 44}, {0xdcfdda51, 45}, {0x68ad9b51, 46}, {0x688ddb51, 47}}
};

}

}

#endif

// Local Variables:
// c-basic-offset: 2
// eval: (c-set-offset 'substatement-open 0)
// eval: (c-set-offset 'innamespace 0)
// End:
