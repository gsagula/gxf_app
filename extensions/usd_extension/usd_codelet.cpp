
#include "usd_codelet.hpp"  // NOLINT

namespace sample {
namespace usd_extension {

gxf_result_t usd_codelet::start() {

    GXF_LOG_INFO("usd_codelet::start");
    return GXF_SUCCESS;
}

gxf_result_t usd_codelet::tick() {
  GXF_LOG_INFO("usd_codelet::tick");
  return GXF_SUCCESS;
}

}  // namespace usd_extension
}  // namespace sample

  