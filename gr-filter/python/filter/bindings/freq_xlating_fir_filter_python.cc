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
/* BINDTOOL_HEADER_FILE(freq_xlating_fir_filter.h) */
/* BINDTOOL_HEADER_FILE_HASH(e7f41f84a5f10af93400212b44c2012f)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/filter/freq_xlating_fir_filter.h>

template <class IN_T, class OUT_T, class TAP_T>
void bind_freq_xlating_fir_filter_template(py::module& m, const char* classname)
{
    using freq_xlating_fir_filter =
        gr::filter::freq_xlating_fir_filter<IN_T, OUT_T, TAP_T>;

    py::class_<freq_xlating_fir_filter,
               gr::sync_decimator,
               gr::sync_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<freq_xlating_fir_filter>>(m, classname)
        .def(py::init(&gr::filter::freq_xlating_fir_filter<IN_T, OUT_T, TAP_T>::make),
             py::arg("decimation"),
             py::arg("taps"),
             py::arg("center_freq"),
             py::arg("sampling_freq"))

        .def("set_center_freq",
             &freq_xlating_fir_filter::set_center_freq,
             py::arg("center_freq"))
        .def("center_freq", &freq_xlating_fir_filter::center_freq)

        .def("set_taps", &freq_xlating_fir_filter::set_taps, py::arg("taps"))
        .def("taps", &freq_xlating_fir_filter::taps);
}


void bind_freq_xlating_fir_filter(py::module& m)
{
    bind_freq_xlating_fir_filter_template<gr_complex, gr_complex, gr_complex>(
        m, "freq_xlating_fir_filter_ccc");
    bind_freq_xlating_fir_filter_template<gr_complex, gr_complex, float>(
        m, "freq_xlating_fir_filter_ccf");
    bind_freq_xlating_fir_filter_template<float, gr_complex, gr_complex>(
        m, "freq_xlating_fir_filter_fcc");
    bind_freq_xlating_fir_filter_template<float, gr_complex, float>(
        m, "freq_xlating_fir_filter_fcf");
    bind_freq_xlating_fir_filter_template<std::int16_t, gr_complex, float>(
        m, "freq_xlating_fir_filter_scf");
    bind_freq_xlating_fir_filter_template<std::int16_t, gr_complex, gr_complex>(
        m, "freq_xlating_fir_filter_scc");
}
