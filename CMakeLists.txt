cmake_minimum_required(VERSION 3.0)
project(KPublicTransport VERSION 0.0.1)

find_package(ECM 5.38 REQUIRED NO_MODULE)
set(CMAKE_MODULE_PATH ${ECM_MODULE_PATH} ${ECM_KDE_MODULE_DIR})

include(KDEFrameworkCompilerSettings NO_POLICY_SCOPE)
include(ECMAddTests)
include(ECMGenerateHeaders)
include(ECMQtDeclareLoggingCategory)
include(ECMSetupVersion)
include(FeatureSummary)
include(KDEInstallDirs)
include(KDECMakeSettings)
include(GenerateExportHeader)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
ecm_setup_version(PROJECT VARIABLE_PREFIX KPUBLICTRANSPORT
    VERSION_HEADER kpublictransport_version.h
    PACKAGE_VERSION_FILE "${CMAKE_CURRENT_BINARY_DIR}/KPublicTransportConfigVersion.cmake"
)

find_package(Qt5 5.10 REQUIRED COMPONENTS Test Quick Widgets)

add_definitions(-DQT_DISABLE_DEPRECATED_BEFORE=0x060000)

add_subdirectory(src)
add_subdirectory(autotests)
add_subdirectory(tests)

feature_summary(WHAT ALL INCLUDE_QUIET_PACKAGES FATAL_ON_MISSING_REQUIRED_PACKAGES)

set(CMAKECONFIG_INSTALL_DIR "${CMAKECONFIG_INSTALL_PREFIX}/KPublicTransport")
configure_package_config_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/KPublicTransportConfig.cmake.in"
    "${CMAKE_CURRENT_BINARY_DIR}/KPublicTransportConfig.cmake"
    INSTALL_DESTINATION "${CMAKECONFIG_INSTALL_DIR}"
)

install(FILES
        "${CMAKE_CURRENT_BINARY_DIR}/KPublicTransportConfig.cmake"
        "${CMAKE_CURRENT_BINARY_DIR}/KPublicTransportConfigVersion.cmake"
    DESTINATION "${CMAKECONFIG_INSTALL_DIR}"
    COMPONENT Devel
)

install(EXPORT KPublicTransportTargets DESTINATION "${CMAKECONFIG_INSTALL_DIR}" FILE KPublicTransportTargets.cmake)
