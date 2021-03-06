/*

    Copyright (C) 2014, The University of Texas at Austin

    This file is part of libflame and is available under the 3-Clause
    BSD license, which can be found in the LICENSE file at the top-level
    directory, or at http://opensource.org/licenses/BSD-3-Clause

*/

FLA_Error FLA_Svd_ext_u_unb_var1( FLA_Svd_type jobu, FLA_Svd_type jobv, 
                                  dim_t n_iter_max,
                                  FLA_Obj A, FLA_Obj s, FLA_Obj V, FLA_Obj U,
                                  dim_t k_accum,
                                  dim_t b_alg );
