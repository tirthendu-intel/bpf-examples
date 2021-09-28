#ifndef __NAT64_H__
#define __NAT64_H__

#include <linux/in6.h>

struct nat64_config {
        struct in6_addr v6_prefix;
        __u64 timeout_ns;
        __u32 v4_prefix;
        __u32 v4_mask;
        __u32 next_addr;
};

struct v6_addr_state {
  __u64 last_seen;
  __u32 v4_addr;
  __u32 static_conf;
};

#endif
