#pragma once

#define MONITOR_DETAIL_STATIC_ASSERT(...)                                      \
  static_assert((__VA_ARGS__), #__VA_ARGS__)
