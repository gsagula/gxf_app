
#include "usd_codelet.hpp"

#include "gxf/std/extension_factory_helper.hpp"

GXF_EXT_FACTORY_BEGIN()
GXF_EXT_FACTORY_SET_INFO(0x0f33c3a837643bf3, 0xb49a7acf301d9de3, "usd_extension",
                         "A Dummy Example", "", "1.0.0", "LICENSE");
GXF_EXT_FACTORY_ADD(0x5334eb46afda3014, 0xbebf972547790d29, sample::usd_extension::usd_codelet,
                    nvidia::gxf::Codelet, "Dummy example source codelet.");
GXF_EXT_FACTORY_END()
  