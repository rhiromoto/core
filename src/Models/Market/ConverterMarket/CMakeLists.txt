# Build the cyclus executable from the CYCLUS_SRC source files
ADD_LIBRARY( ConverterMarket  ConverterMarket.cpp)
SET( CYCLUS_LIBRARIES ${CYCLUS_LIBRARIES} ConverterMarket )
SET(MarketTestSource ${MarketTestSource} 
  ${CMAKE_CURRENT_SOURCE_DIR}/ConverterMarketTests.cpp 
  ${CMAKE_CURRENT_SOURCE_DIR}/ConverterMarket.cpp 
  PARENT_SCOPE)
CONFIGURE_FILE(
${CYCLUS_SOURCE_DIR}/Models/Market/ConverterMarket/ConverterMarket.rng
${CMAKE_CURRENT_BINARY_DIR}/ConverterMarket.rng
COPYONLY
)
