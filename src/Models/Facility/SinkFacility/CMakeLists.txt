# Build the cyclus executable from the CYCLUS_SRC source files
ADD_LIBRARY( SinkFacility        SinkFacility.cpp )
SET(CYCLUS_LIBRARIES ${CYCLUS_LIBRARIES} SinkFacility )
SET(FacilityTestSource ${FacilityTestSource} 
  ${CMAKE_CURRENT_SOURCE_DIR}/SinkFacilityTests.cpp 
  ${CMAKE_CURRENT_SOURCE_DIR}/SinkFacility.cpp 
  PARENT_SCOPE)
CONFIGURE_FILE(
${CYCLUS_SOURCE_DIR}/Models/Facility/SinkFacility/SinkFacility.rng
${CMAKE_CURRENT_BINARY_DIR}/SinkFacility.rng
COPYONLY
)
