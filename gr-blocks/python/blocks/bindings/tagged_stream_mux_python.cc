/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(tagged_stream_mux.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(4b0618239f1da2693ba8632a5641ad63)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/blocks/tagged_stream_mux.h>
// pydoc.h is automatically generated in the build directory
#include <tagged_stream_mux_pydoc.h>

void bind_tagged_stream_mux(py::module& m)
{

    using tagged_stream_mux = ::gr::blocks::tagged_stream_mux;


    py::class_<tagged_stream_mux,
               gr::tagged_stream_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<tagged_stream_mux>>(
        m, "tagged_stream_mux", D(tagged_stream_mux))

        .def(py::init(&tagged_stream_mux::make),
             py::arg("itemsize"),
             py::arg("lengthtagname"),
             py::arg("tag_preserve_head_pos") = 0,
             D(tagged_stream_mux, make))


        ;
}
