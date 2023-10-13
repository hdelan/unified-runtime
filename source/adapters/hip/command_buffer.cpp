//===--------- command_buffer.cpp - HIP Adapter ---------------------------===//
//
// Copyright (C) 2023 Intel Corporation
//
// Part of the Unified-Runtime Project, under the Apache License v2.0 with LLVM
// Exceptions. See LICENSE.TXT
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include "command_buffer.hpp"
#include "common.hpp"

/// Stub implementations of UR experimental feature command-buffers

UR_APIEXPORT ur_result_t UR_APICALL urCommandBufferCreateExp(
    ur_context_handle_t, ur_device_handle_t,
    const ur_exp_command_buffer_desc_t *, ur_exp_command_buffer_handle_t *) {
  detail::ur::die("Experimental Command-buffer feature is not "
                  "implemented for HIP adapter.");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL
urCommandBufferRetainExp(ur_exp_command_buffer_handle_t) {
  detail::ur::die("Experimental Command-buffer feature is not "
                  "implemented for HIP adapter.");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL
urCommandBufferReleaseExp(ur_exp_command_buffer_handle_t) {
  detail::ur::die("Experimental Command-buffer feature is not "
                  "implemented for HIP adapter.");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL
urCommandBufferFinalizeExp(ur_exp_command_buffer_handle_t) {
  detail::ur::die("Experimental Command-buffer feature is not "
                  "implemented for HIP adapter.");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urCommandBufferAppendKernelLaunchExp(
    ur_exp_command_buffer_handle_t, ur_kernel_handle_t, uint32_t,
    const size_t *, const size_t *, const size_t *, uint32_t,
    const ur_exp_command_buffer_sync_point_t *,
    ur_exp_command_buffer_sync_point_t *) {
  detail::ur::die("Experimental Command-buffer feature is not "
                  "implemented for HIP adapter.");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urCommandBufferAppendMemcpyUSMExp(
    ur_exp_command_buffer_handle_t, void *, const void *, size_t, uint32_t,
    const ur_exp_command_buffer_sync_point_t *,
    ur_exp_command_buffer_sync_point_t *) {
  detail::ur::die("Experimental Command-buffer feature is not "
                  "implemented for HIP adapter.");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urCommandBufferAppendMembufferCopyExp(
    ur_exp_command_buffer_handle_t, ur_mem_handle_t, ur_mem_handle_t, size_t,
    size_t, size_t, uint32_t, const ur_exp_command_buffer_sync_point_t *,
    ur_exp_command_buffer_sync_point_t *) {
  detail::ur::die("Experimental Command-buffer feature is not "
                  "implemented for HIP adapter.");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urCommandBufferAppendMembufferCopyRectExp(
    ur_exp_command_buffer_handle_t, ur_mem_handle_t, ur_mem_handle_t,
    ur_rect_offset_t, ur_rect_offset_t, ur_rect_region_t, size_t, size_t,
    size_t, size_t, uint32_t, const ur_exp_command_buffer_sync_point_t *,
    ur_exp_command_buffer_sync_point_t *) {
  detail::ur::die("Experimental Command-buffer feature is not "
                  "implemented for HIP adapter.");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT
ur_result_t UR_APICALL urCommandBufferAppendMembufferWriteExp(
    ur_exp_command_buffer_handle_t, ur_mem_handle_t, size_t, size_t,
    const void *, uint32_t, const ur_exp_command_buffer_sync_point_t *,
    ur_exp_command_buffer_sync_point_t *) {
  detail::ur::die("Experimental Command-buffer feature is not "
                  "implemented for HIP adapter.");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT
ur_result_t UR_APICALL urCommandBufferAppendMembufferReadExp(
    ur_exp_command_buffer_handle_t, ur_mem_handle_t, size_t, size_t, void *,
    uint32_t, const ur_exp_command_buffer_sync_point_t *,
    ur_exp_command_buffer_sync_point_t *) {
  detail::ur::die("Experimental Command-buffer feature is not "
                  "implemented for HIP adapter.");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT
ur_result_t UR_APICALL urCommandBufferAppendMembufferWriteRectExp(
    ur_exp_command_buffer_handle_t, ur_mem_handle_t, ur_rect_offset_t,
    ur_rect_offset_t, ur_rect_region_t, size_t, size_t, size_t, size_t, void *,
    uint32_t, const ur_exp_command_buffer_sync_point_t *,
    ur_exp_command_buffer_sync_point_t *) {
  detail::ur::die("Experimental Command-buffer feature is not "
                  "implemented for HIP adapter.");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT
ur_result_t UR_APICALL urCommandBufferAppendMembufferReadRectExp(
    ur_exp_command_buffer_handle_t, ur_mem_handle_t, ur_rect_offset_t,
    ur_rect_offset_t, ur_rect_region_t, size_t, size_t, size_t, size_t, void *,
    uint32_t, const ur_exp_command_buffer_sync_point_t *,
    ur_exp_command_buffer_sync_point_t *) {
  detail::ur::die("Experimental Command-buffer feature is not "
                  "implemented for HIP adapter.");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urCommandBufferEnqueueExp(
    ur_exp_command_buffer_handle_t, ur_queue_handle_t, uint32_t,
    const ur_event_handle_t *, ur_event_handle_t *) {
  detail::ur::die("Experimental Command-buffer feature is not "
                  "implemented for HIP adapter.");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}