set(MODULE_NAME rtklib243)


add_library(${MODULE_NAME} SHARED
rtkcmn.c 
convkml.c 
convrnx.c 
convgpx.c 
datum.c 
download.c 
ephemeris.c 
geoid.c 
gis.c 
ionex.c 
lambda.c 
options.c 
pntpos.c 
postpos.c 
ppp.c 
ppp_ar.c 
ppp_corr.c 
preceph.c 
qzslex.c 
rcvraw.c 
rinex.c 
rtcm.c 
rtcm2.c 
rtcm3.c 
rtcm3e.c 
rtkpos.c 
rtksvr.c 
sbas.c 
solution.c 
stream.c 
streamsvr.c 
tides.c 
tle.c 
rcv/binex.c 
rcv/crescent.c 
rcv/gw10.c 
rcv/javad.c 
rcv/novatel.c 
rcv/nvs.c 
rcv/rcvlex.c 
rcv/rt17.c 
rcv/septentrio.c 
rcv/skytraq.c 
rcv/ss2.c 
rcv/ublox.c 
rcv/cmr.c
useless.c
)

target_include_directories(${MODULE_NAME} PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_compile_definitions(${MODULE_NAME} PRIVATE
    _RTLDLL
    NO_STRICT
    TRACE
    ENAGLO
    ENAQZS
    ENAGAL
    ENACMP
    ENAIRN
    NFREQ=3
    NEXOBS=3
    EXTLEX
)