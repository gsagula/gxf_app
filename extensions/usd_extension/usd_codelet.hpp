
#pragma once

#include "gxf/std/codelet.hpp"

namespace sample {
namespace usd_extension {

// Logs a message in start() and tick()
class usd_codelet : public nvidia::gxf::Codelet {
 public:
  gxf_result_t start() override;
  gxf_result_t tick() override;
  gxf_result_t stop() override { return GXF_SUCCESS; }
};

}  // namespace usd_extension
}  // namespace sample
  