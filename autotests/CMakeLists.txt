add_definitions(-DSOURCE_DIR="${CMAKE_CURRENT_SOURCE_DIR}")

ecm_add_test(locationtest.cpp LINK_LIBRARIES Qt5::Test KPublicTransport)
ecm_add_test(linetest.cpp LINK_LIBRARIES Qt5::Test KPublicTransport)
ecm_add_test(departuretest.cpp LINK_LIBRARIES Qt5::Test KPublicTransport)
ecm_add_test(journeytest.cpp LINK_LIBRARIES Qt5::Test KPublicTransport)
ecm_add_test(navitiaparsertest.cpp LINK_LIBRARIES Qt5::Test KPublicTransport)
ecm_add_test(hafasparsertest.cpp LINK_LIBRARIES Qt5::Test KPublicTransport)
ecm_add_test(publictransportmanagertest.cpp LINK_LIBRARIES Qt5::Test KPublicTransport)
ecm_add_test(cachetest.cpp LINK_LIBRARIES Qt5::Test KPublicTransport)
