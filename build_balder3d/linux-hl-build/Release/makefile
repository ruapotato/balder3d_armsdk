INC=-I./ -I../../../armsdk/Kha/Kinc/Sources -I../../../armsdk/Kha/Kinc/Backends/System/Linux/Sources -I../../../armsdk/Kha/Kinc/Backends/System/POSIX/Sources -I../wayland -I../../../armsdk/Kha/Kinc/Backends/Graphics4/OpenGL/Sources -I../../../armsdk/Kha/Kinc/Backends/Graphics5/G5onG4/Sources -I.. -I../../../armsdk/Kha/Backends/Kinc-HL/hl/src -I../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre -I../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/include -I../../../armsdk/Kha/Backends/Kinc-HL/hl/include/zlib -I../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet 
LIB=-static-libgcc -static-libstdc++ -pthread -lasound -ldl -ludev -lGL -lEGL
DEF=-DHXCPP_API_LEVEL=400 -DHXCPP_GC_GENERATIONAL -DKORE_G1 -DKORE_G2 -DKORE_G3 -DKORE_A1 -DKORE_A2 -DKORE_LZ4X -DKORE_OPENGL -DKINC_EGL -D_POSIX_C_SOURCE=200112L -D_XOPEN_SOURCE=600 -DKORE_G4 -DKORE_G5 -DKORE_G5ONG4 -DKORE_MULTITHREADED_AUDIO -DKORE -DKOREC -DROTATE90 -DLIBHL_STATIC -DPCRE2_CODE_UNIT_WIDTH=8 -DHAVE_CONFIG_H -DNDEBUG 

CFLAGS=-std=c11 
CPPFLAGS=
balder3d_1_0_124: compute.o openglunit.o g5ong4unit.o linuxunit.o posixunit.o rootunit.o rootunit_.o a1unit.o audio.o graphics.o graphics_kore.o graphics_soft.o g4unit.o g5unit.o inputunit.o iounit.o stb_vorbis.o mathunit.o networkunit.o waylandunit.o kore_sources.o aes.o aesni.o arc4.o asn1parse.o asn1write.o base64.o bignum.o blowfish.o camellia.o ccm.o certs.o cipher.o cipher_wrap.o cmac.o ctr_drbg.o debug.o des.o dhm.o ecdh.o ecdsa.o ecjpake.o ecp.o ecp_curves.o entropy.o entropy_poll.o error.o gcm.o havege.o hmac_drbg.o md.o md2.o md4.o md5.o md_wrap.o memory_buffer_alloc.o net_sockets.o oid.o padlock.o pem.o pk.o pk_wrap.o pkcs11.o pkcs12.o pkcs5.o pkparse.o pkwrite.o platform.o ripemd160.o rsa.o rsa_internal.o sha1.o sha256.o sha512.o ssl_cache.o ssl_ciphersuites.o ssl_cli.o ssl_cookie.o ssl_srv.o ssl_ticket.o ssl_tls.o threading.o timing.o version.o version_features.o x509.o x509_create.o x509_crl.o x509_crt.o x509_csr.o x509write_crt.o x509write_csr.o xtea.o pcre2_auto_possess.o pcre2_chartables.o pcre2_compile.o pcre2_config.o pcre2_context.o pcre2_convert.o pcre2_dfa_match.o pcre2_error.o pcre2_extuni.o pcre2_find_bracket.o pcre2_jit_compile.o pcre2_maketables.o pcre2_match.o pcre2_match_data.o pcre2_newline.o pcre2_ord2utf.o pcre2_pattern_info.o pcre2_script_run.o pcre2_serialize.o pcre2_string_utils.o pcre2_study.o pcre2_substitute.o pcre2_substring.o pcre2_tables.o pcre2_ucd.o pcre2_ucptables.o pcre2_valid_utf.o pcre2_xclass.o adler32.o crc32.o deflate.o inffast.o inflate.o inftrees.o trees.o zutil.o sha1_.o ssl.o gc.o array.o buffer.o bytes.o cast.o date.o error_.o file.o fun.o maps.o math.o obj.o process.o random.o regexp.o socket.o string.o sys.o sys_android.o thread.o track.o types.o ucs2.o bridge.o btaxissweep3.o btbroadphaseproxy.o btcollisionalgorithm.o btdbvt.o btdbvtbroadphase.o btdispatcher.o btoverlappingpaircache.o btquantizedbvh.o btsimplebroadphase.o spheretriangledetector.o btactivatingcollisionalgorithm.o btbox2dbox2dcollisionalgorithm.o btboxboxcollisionalgorithm.o btboxboxdetector.o btcollisiondispatcher.o btcollisiondispatchermt.o btcollisionobject.o btcollisionworld.o btcollisionworldimporter.o btcompoundcollisionalgorithm.o btcompoundcompoundcollisionalgorithm.o btconvex2dconvex2dalgorithm.o btconvexconcavecollisionalgorithm.o btconvexconvexalgorithm.o btconvexplanecollisionalgorithm.o btdefaultcollisionconfiguration.o btemptycollisionalgorithm.o btghostobject.o bthashedsimplepaircache.o btinternaledgeutility.o btmanifoldresult.o btsimulationislandmanager.o btsphereboxcollisionalgorithm.o btspherespherecollisionalgorithm.o btspheretrianglecollisionalgorithm.o btunionfind.o btbox2dshape.o btboxshape.o btbvhtrianglemeshshape.o btcapsuleshape.o btcollisionshape.o btcompoundshape.o btconcaveshape.o btconeshape.o btconvex2dshape.o btconvexhullshape.o btconvexinternalshape.o btconvexpointcloudshape.o btconvexpolyhedron.o btconvexshape.o btconvextrianglemeshshape.o btcylindershape.o btemptyshape.o btheightfieldterrainshape.o btminkowskisumshape.o btmultisphereshape.o btmultimaterialtrianglemeshshape.o btoptimizedbvh.o btpolyhedralconvexshape.o btscaledbvhtrianglemeshshape.o btshapehull.o btsphereshape.o btstaticplaneshape.o btstridingmeshinterface.o bttetrahedronshape.o bttrianglebuffer.o bttrianglecallback.o bttriangleindexvertexarray.o bttriangleindexvertexmaterialarray.o bttrianglemesh.o bttrianglemeshshape.o btuniformscalingshape.o btcontactprocessing.o btgimpactbvh.o btgimpactcollisionalgorithm.o btgimpactquantizedbvh.o btgimpactshape.o btgenericpoolallocator.o bttriangleshapeex.o gim_box_set.o gim_contact.o gim_memory.o gim_tri_collision.o btcontinuousconvexcollision.o btconvexcast.o btgjkconvexcast.o btgjkepa2.o btgjkepapenetrationdepthsolver.o btgjkpairdetector.o btminkowskipenetrationdepthsolver.o btpersistentmanifold.o btpolyhedralcontactclipping.o btraycastcallback.o btsubsimplexconvexcast.o btvoronoisimplexsolver.o btkinematiccharactercontroller.o btconetwistconstraint.o btcontactconstraint.o btfixedconstraint.o btgearconstraint.o btgeneric6dofconstraint.o btgeneric6dofspring2constraint.o btgeneric6dofspringconstraint.o bthinge2constraint.o bthingeconstraint.o btnncgconstraintsolver.o btpoint2pointconstraint.o btsequentialimpulseconstraintsolver.o btsliderconstraint.o btsolve2linearconstraint.o bttypedconstraint.o btuniversalconstraint.o btdiscretedynamicsworld.o btdiscretedynamicsworldmt.o btrigidbody.o btsimpledynamicsworld.o btsimulationislandmanagermt.o btmultibody.o btmultibodyconstraint.o btmultibodyconstraintsolver.o btmultibodydynamicsworld.o btmultibodyfixedconstraint.o btmultibodygearconstraint.o btmultibodyjointlimitconstraint.o btmultibodyjointmotor.o btmultibodypoint2point.o btmultibodysliderconstraint.o btdantziglcp.o btlemkealgorithm.o btmlcpsolver.o btraycastvehicle.o btwheelinfo.o btdefaultsoftbodysolver.o btsoftbody.o btsoftbodyconcavecollisionalgorithm.o btsoftbodyhelpers.o btsoftbodyrigidbodycollisionconfiguration.o btsoftmultibodydynamicsworld.o btsoftrigidcollisionalgorithm.o btsoftrigiddynamicsworld.o btsoftsoftcollisionalgorithm.o btalignedallocator.o btconvexhull.o btconvexhullcomputer.o btgeometryutil.o btpolardecomposition.o btquickprof.o btserializer.o btserializer64.o btthreads.o btvector3.o debugdrawer.o bullet.o 
	g++ -o "balder3d_1_0_124"  -O2 compute.o openglunit.o g5ong4unit.o linuxunit.o posixunit.o rootunit.o rootunit_.o a1unit.o audio.o graphics.o graphics_kore.o graphics_soft.o g4unit.o g5unit.o inputunit.o iounit.o stb_vorbis.o mathunit.o networkunit.o waylandunit.o kore_sources.o aes.o aesni.o arc4.o asn1parse.o asn1write.o base64.o bignum.o blowfish.o camellia.o ccm.o certs.o cipher.o cipher_wrap.o cmac.o ctr_drbg.o debug.o des.o dhm.o ecdh.o ecdsa.o ecjpake.o ecp.o ecp_curves.o entropy.o entropy_poll.o error.o gcm.o havege.o hmac_drbg.o md.o md2.o md4.o md5.o md_wrap.o memory_buffer_alloc.o net_sockets.o oid.o padlock.o pem.o pk.o pk_wrap.o pkcs11.o pkcs12.o pkcs5.o pkparse.o pkwrite.o platform.o ripemd160.o rsa.o rsa_internal.o sha1.o sha256.o sha512.o ssl_cache.o ssl_ciphersuites.o ssl_cli.o ssl_cookie.o ssl_srv.o ssl_ticket.o ssl_tls.o threading.o timing.o version.o version_features.o x509.o x509_create.o x509_crl.o x509_crt.o x509_csr.o x509write_crt.o x509write_csr.o xtea.o pcre2_auto_possess.o pcre2_chartables.o pcre2_compile.o pcre2_config.o pcre2_context.o pcre2_convert.o pcre2_dfa_match.o pcre2_error.o pcre2_extuni.o pcre2_find_bracket.o pcre2_jit_compile.o pcre2_maketables.o pcre2_match.o pcre2_match_data.o pcre2_newline.o pcre2_ord2utf.o pcre2_pattern_info.o pcre2_script_run.o pcre2_serialize.o pcre2_string_utils.o pcre2_study.o pcre2_substitute.o pcre2_substring.o pcre2_tables.o pcre2_ucd.o pcre2_ucptables.o pcre2_valid_utf.o pcre2_xclass.o adler32.o crc32.o deflate.o inffast.o inflate.o inftrees.o trees.o zutil.o sha1_.o ssl.o gc.o array.o buffer.o bytes.o cast.o date.o error_.o file.o fun.o maps.o math.o obj.o process.o random.o regexp.o socket.o string.o sys.o sys_android.o thread.o track.o types.o ucs2.o bridge.o btaxissweep3.o btbroadphaseproxy.o btcollisionalgorithm.o btdbvt.o btdbvtbroadphase.o btdispatcher.o btoverlappingpaircache.o btquantizedbvh.o btsimplebroadphase.o spheretriangledetector.o btactivatingcollisionalgorithm.o btbox2dbox2dcollisionalgorithm.o btboxboxcollisionalgorithm.o btboxboxdetector.o btcollisiondispatcher.o btcollisiondispatchermt.o btcollisionobject.o btcollisionworld.o btcollisionworldimporter.o btcompoundcollisionalgorithm.o btcompoundcompoundcollisionalgorithm.o btconvex2dconvex2dalgorithm.o btconvexconcavecollisionalgorithm.o btconvexconvexalgorithm.o btconvexplanecollisionalgorithm.o btdefaultcollisionconfiguration.o btemptycollisionalgorithm.o btghostobject.o bthashedsimplepaircache.o btinternaledgeutility.o btmanifoldresult.o btsimulationislandmanager.o btsphereboxcollisionalgorithm.o btspherespherecollisionalgorithm.o btspheretrianglecollisionalgorithm.o btunionfind.o btbox2dshape.o btboxshape.o btbvhtrianglemeshshape.o btcapsuleshape.o btcollisionshape.o btcompoundshape.o btconcaveshape.o btconeshape.o btconvex2dshape.o btconvexhullshape.o btconvexinternalshape.o btconvexpointcloudshape.o btconvexpolyhedron.o btconvexshape.o btconvextrianglemeshshape.o btcylindershape.o btemptyshape.o btheightfieldterrainshape.o btminkowskisumshape.o btmultisphereshape.o btmultimaterialtrianglemeshshape.o btoptimizedbvh.o btpolyhedralconvexshape.o btscaledbvhtrianglemeshshape.o btshapehull.o btsphereshape.o btstaticplaneshape.o btstridingmeshinterface.o bttetrahedronshape.o bttrianglebuffer.o bttrianglecallback.o bttriangleindexvertexarray.o bttriangleindexvertexmaterialarray.o bttrianglemesh.o bttrianglemeshshape.o btuniformscalingshape.o btcontactprocessing.o btgimpactbvh.o btgimpactcollisionalgorithm.o btgimpactquantizedbvh.o btgimpactshape.o btgenericpoolallocator.o bttriangleshapeex.o gim_box_set.o gim_contact.o gim_memory.o gim_tri_collision.o btcontinuousconvexcollision.o btconvexcast.o btgjkconvexcast.o btgjkepa2.o btgjkepapenetrationdepthsolver.o btgjkpairdetector.o btminkowskipenetrationdepthsolver.o btpersistentmanifold.o btpolyhedralcontactclipping.o btraycastcallback.o btsubsimplexconvexcast.o btvoronoisimplexsolver.o btkinematiccharactercontroller.o btconetwistconstraint.o btcontactconstraint.o btfixedconstraint.o btgearconstraint.o btgeneric6dofconstraint.o btgeneric6dofspring2constraint.o btgeneric6dofspringconstraint.o bthinge2constraint.o bthingeconstraint.o btnncgconstraintsolver.o btpoint2pointconstraint.o btsequentialimpulseconstraintsolver.o btsliderconstraint.o btsolve2linearconstraint.o bttypedconstraint.o btuniversalconstraint.o btdiscretedynamicsworld.o btdiscretedynamicsworldmt.o btrigidbody.o btsimpledynamicsworld.o btsimulationislandmanagermt.o btmultibody.o btmultibodyconstraint.o btmultibodyconstraintsolver.o btmultibodydynamicsworld.o btmultibodyfixedconstraint.o btmultibodygearconstraint.o btmultibodyjointlimitconstraint.o btmultibodyjointmotor.o btmultibodypoint2point.o btmultibodysliderconstraint.o btdantziglcp.o btlemkealgorithm.o btmlcpsolver.o btraycastvehicle.o btwheelinfo.o btdefaultsoftbodysolver.o btsoftbody.o btsoftbodyconcavecollisionalgorithm.o btsoftbodyhelpers.o btsoftbodyrigidbodycollisionconfiguration.o btsoftmultibodydynamicsworld.o btsoftrigidcollisionalgorithm.o btsoftrigiddynamicsworld.o btsoftsoftcollisionalgorithm.o btalignedallocator.o btconvexhull.o btconvexhullcomputer.o btgeometryutil.o btpolardecomposition.o btquickprof.o btserializer.o btserializer64.o btthreads.o btvector3.o debugdrawer.o bullet.o  $(LIB)

-include compute.d
compute.o: ../../../armsdk/Kha/Kinc/Backends/Graphics4/OpenGL/Sources/kinc/backend/compute.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Kinc/Backends/Graphics4/OpenGL/Sources/kinc/backend/compute.c -o compute.o

-include openglunit.d
openglunit.o: ../../../armsdk/Kha/Kinc/Backends/Graphics4/OpenGL/Sources/kinc/backend/graphics4/openglunit.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Kinc/Backends/Graphics4/OpenGL/Sources/kinc/backend/graphics4/openglunit.c -o openglunit.o

-include g5ong4unit.d
g5ong4unit.o: ../../../armsdk/Kha/Kinc/Backends/Graphics5/G5onG4/Sources/kinc/backend/graphics5/g5ong4unit.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Kinc/Backends/Graphics5/G5onG4/Sources/kinc/backend/graphics5/g5ong4unit.c -o g5ong4unit.o

-include linuxunit.d
linuxunit.o: ../../../armsdk/Kha/Kinc/Backends/System/Linux/Sources/kinc/backend/linuxunit.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Kinc/Backends/System/Linux/Sources/kinc/backend/linuxunit.c -o linuxunit.o

-include posixunit.d
posixunit.o: ../../../armsdk/Kha/Kinc/Backends/System/POSIX/Sources/kinc/backend/posixunit.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Kinc/Backends/System/POSIX/Sources/kinc/backend/posixunit.c -o posixunit.o

-include rootunit.d
rootunit.o: ../../../armsdk/Kha/Kinc/Sources/kinc/rootunit.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Kinc/Sources/kinc/rootunit.c -o rootunit.o

-include rootunit_.d
rootunit_.o: ../../../armsdk/Kha/Kinc/Sources/kinc/rootunit.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../armsdk/Kha/Kinc/Sources/kinc/rootunit.cpp -o rootunit_.o

-include a1unit.d
a1unit.o: ../../../armsdk/Kha/Kinc/Sources/kinc/audio1/a1unit.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Kinc/Sources/kinc/audio1/a1unit.c -o a1unit.o

-include audio.d
audio.o: ../../../armsdk/Kha/Kinc/Sources/kinc/audio2/audio.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Kinc/Sources/kinc/audio2/audio.c -o audio.o

-include graphics.d
graphics.o: ../../../armsdk/Kha/Kinc/Sources/kinc/graphics1/graphics.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Kinc/Sources/kinc/graphics1/graphics.c -o graphics.o

-include graphics_kore.d
graphics_kore.o: ../../../armsdk/Kha/Kinc/Sources/kinc/graphics2/graphics_kore.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../armsdk/Kha/Kinc/Sources/kinc/graphics2/graphics_kore.cpp -o graphics_kore.o

-include graphics_soft.d
graphics_soft.o: ../../../armsdk/Kha/Kinc/Sources/kinc/graphics2/graphics_soft.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Kinc/Sources/kinc/graphics2/graphics_soft.c -o graphics_soft.o

-include g4unit.d
g4unit.o: ../../../armsdk/Kha/Kinc/Sources/kinc/graphics4/g4unit.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Kinc/Sources/kinc/graphics4/g4unit.c -o g4unit.o

-include g5unit.d
g5unit.o: ../../../armsdk/Kha/Kinc/Sources/kinc/graphics5/g5unit.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Kinc/Sources/kinc/graphics5/g5unit.c -o g5unit.o

-include inputunit.d
inputunit.o: ../../../armsdk/Kha/Kinc/Sources/kinc/input/inputunit.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Kinc/Sources/kinc/input/inputunit.c -o inputunit.o

-include iounit.d
iounit.o: ../../../armsdk/Kha/Kinc/Sources/kinc/io/iounit.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Kinc/Sources/kinc/io/iounit.c -o iounit.o

-include stb_vorbis.d
stb_vorbis.o: ../../../armsdk/Kha/Kinc/Sources/kinc/libs/stb_vorbis.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Kinc/Sources/kinc/libs/stb_vorbis.c -o stb_vorbis.o

-include mathunit.d
mathunit.o: ../../../armsdk/Kha/Kinc/Sources/kinc/math/mathunit.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Kinc/Sources/kinc/math/mathunit.c -o mathunit.o

-include networkunit.d
networkunit.o: ../../../armsdk/Kha/Kinc/Sources/kinc/network/networkunit.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Kinc/Sources/kinc/network/networkunit.c -o networkunit.o

-include waylandunit.d
waylandunit.o: ../wayland/wayland-generated/waylandunit.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../wayland/wayland-generated/waylandunit.c -o waylandunit.o

-include kore_sources.d
kore_sources.o: ../kore_sources.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../kore_sources.c -o kore_sources.o

-include aes.d
aes.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/aes.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/aes.c -o aes.o

-include aesni.d
aesni.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/aesni.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/aesni.c -o aesni.o

-include arc4.d
arc4.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/arc4.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/arc4.c -o arc4.o

-include asn1parse.d
asn1parse.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/asn1parse.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/asn1parse.c -o asn1parse.o

-include asn1write.d
asn1write.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/asn1write.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/asn1write.c -o asn1write.o

-include base64.d
base64.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/base64.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/base64.c -o base64.o

-include bignum.d
bignum.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/bignum.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/bignum.c -o bignum.o

-include blowfish.d
blowfish.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/blowfish.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/blowfish.c -o blowfish.o

-include camellia.d
camellia.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/camellia.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/camellia.c -o camellia.o

-include ccm.d
ccm.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/ccm.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/ccm.c -o ccm.o

-include certs.d
certs.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/certs.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/certs.c -o certs.o

-include cipher.d
cipher.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/cipher.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/cipher.c -o cipher.o

-include cipher_wrap.d
cipher_wrap.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/cipher_wrap.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/cipher_wrap.c -o cipher_wrap.o

-include cmac.d
cmac.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/cmac.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/cmac.c -o cmac.o

-include ctr_drbg.d
ctr_drbg.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/ctr_drbg.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/ctr_drbg.c -o ctr_drbg.o

-include debug.d
debug.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/debug.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/debug.c -o debug.o

-include des.d
des.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/des.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/des.c -o des.o

-include dhm.d
dhm.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/dhm.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/dhm.c -o dhm.o

-include ecdh.d
ecdh.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/ecdh.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/ecdh.c -o ecdh.o

-include ecdsa.d
ecdsa.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/ecdsa.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/ecdsa.c -o ecdsa.o

-include ecjpake.d
ecjpake.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/ecjpake.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/ecjpake.c -o ecjpake.o

-include ecp.d
ecp.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/ecp.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/ecp.c -o ecp.o

-include ecp_curves.d
ecp_curves.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/ecp_curves.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/ecp_curves.c -o ecp_curves.o

-include entropy.d
entropy.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/entropy.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/entropy.c -o entropy.o

-include entropy_poll.d
entropy_poll.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/entropy_poll.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/entropy_poll.c -o entropy_poll.o

-include error.d
error.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/error.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/error.c -o error.o

-include gcm.d
gcm.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/gcm.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/gcm.c -o gcm.o

-include havege.d
havege.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/havege.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/havege.c -o havege.o

-include hmac_drbg.d
hmac_drbg.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/hmac_drbg.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/hmac_drbg.c -o hmac_drbg.o

-include md.d
md.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/md.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/md.c -o md.o

-include md2.d
md2.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/md2.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/md2.c -o md2.o

-include md4.d
md4.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/md4.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/md4.c -o md4.o

-include md5.d
md5.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/md5.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/md5.c -o md5.o

-include md_wrap.d
md_wrap.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/md_wrap.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/md_wrap.c -o md_wrap.o

-include memory_buffer_alloc.d
memory_buffer_alloc.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/memory_buffer_alloc.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/memory_buffer_alloc.c -o memory_buffer_alloc.o

-include net_sockets.d
net_sockets.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/net_sockets.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/net_sockets.c -o net_sockets.o

-include oid.d
oid.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/oid.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/oid.c -o oid.o

-include padlock.d
padlock.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/padlock.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/padlock.c -o padlock.o

-include pem.d
pem.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/pem.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/pem.c -o pem.o

-include pk.d
pk.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/pk.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/pk.c -o pk.o

-include pk_wrap.d
pk_wrap.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/pk_wrap.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/pk_wrap.c -o pk_wrap.o

-include pkcs11.d
pkcs11.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/pkcs11.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/pkcs11.c -o pkcs11.o

-include pkcs12.d
pkcs12.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/pkcs12.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/pkcs12.c -o pkcs12.o

-include pkcs5.d
pkcs5.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/pkcs5.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/pkcs5.c -o pkcs5.o

-include pkparse.d
pkparse.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/pkparse.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/pkparse.c -o pkparse.o

-include pkwrite.d
pkwrite.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/pkwrite.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/pkwrite.c -o pkwrite.o

-include platform.d
platform.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/platform.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/platform.c -o platform.o

-include ripemd160.d
ripemd160.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/ripemd160.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/ripemd160.c -o ripemd160.o

-include rsa.d
rsa.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/rsa.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/rsa.c -o rsa.o

-include rsa_internal.d
rsa_internal.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/rsa_internal.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/rsa_internal.c -o rsa_internal.o

-include sha1.d
sha1.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/sha1.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/sha1.c -o sha1.o

-include sha256.d
sha256.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/sha256.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/sha256.c -o sha256.o

-include sha512.d
sha512.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/sha512.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/sha512.c -o sha512.o

-include ssl_cache.d
ssl_cache.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/ssl_cache.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/ssl_cache.c -o ssl_cache.o

-include ssl_ciphersuites.d
ssl_ciphersuites.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/ssl_ciphersuites.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/ssl_ciphersuites.c -o ssl_ciphersuites.o

-include ssl_cli.d
ssl_cli.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/ssl_cli.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/ssl_cli.c -o ssl_cli.o

-include ssl_cookie.d
ssl_cookie.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/ssl_cookie.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/ssl_cookie.c -o ssl_cookie.o

-include ssl_srv.d
ssl_srv.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/ssl_srv.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/ssl_srv.c -o ssl_srv.o

-include ssl_ticket.d
ssl_ticket.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/ssl_ticket.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/ssl_ticket.c -o ssl_ticket.o

-include ssl_tls.d
ssl_tls.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/ssl_tls.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/ssl_tls.c -o ssl_tls.o

-include threading.d
threading.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/threading.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/threading.c -o threading.o

-include timing.d
timing.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/timing.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/timing.c -o timing.o

-include version.d
version.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/version.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/version.c -o version.o

-include version_features.d
version_features.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/version_features.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/version_features.c -o version_features.o

-include x509.d
x509.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/x509.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/x509.c -o x509.o

-include x509_create.d
x509_create.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/x509_create.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/x509_create.c -o x509_create.o

-include x509_crl.d
x509_crl.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/x509_crl.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/x509_crl.c -o x509_crl.o

-include x509_crt.d
x509_crt.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/x509_crt.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/x509_crt.c -o x509_crt.o

-include x509_csr.d
x509_csr.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/x509_csr.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/x509_csr.c -o x509_csr.o

-include x509write_crt.d
x509write_crt.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/x509write_crt.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/x509write_crt.c -o x509write_crt.o

-include x509write_csr.d
x509write_csr.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/x509write_csr.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/x509write_csr.c -o x509write_csr.o

-include xtea.d
xtea.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/xtea.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/mbedtls/library/xtea.c -o xtea.o

-include pcre2_auto_possess.d
pcre2_auto_possess.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_auto_possess.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_auto_possess.c -o pcre2_auto_possess.o

-include pcre2_chartables.d
pcre2_chartables.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_chartables.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_chartables.c -o pcre2_chartables.o

-include pcre2_compile.d
pcre2_compile.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_compile.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_compile.c -o pcre2_compile.o

-include pcre2_config.d
pcre2_config.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_config.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_config.c -o pcre2_config.o

-include pcre2_context.d
pcre2_context.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_context.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_context.c -o pcre2_context.o

-include pcre2_convert.d
pcre2_convert.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_convert.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_convert.c -o pcre2_convert.o

-include pcre2_dfa_match.d
pcre2_dfa_match.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_dfa_match.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_dfa_match.c -o pcre2_dfa_match.o

-include pcre2_error.d
pcre2_error.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_error.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_error.c -o pcre2_error.o

-include pcre2_extuni.d
pcre2_extuni.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_extuni.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_extuni.c -o pcre2_extuni.o

-include pcre2_find_bracket.d
pcre2_find_bracket.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_find_bracket.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_find_bracket.c -o pcre2_find_bracket.o

-include pcre2_jit_compile.d
pcre2_jit_compile.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_jit_compile.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_jit_compile.c -o pcre2_jit_compile.o

-include pcre2_maketables.d
pcre2_maketables.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_maketables.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_maketables.c -o pcre2_maketables.o

-include pcre2_match.d
pcre2_match.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_match.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_match.c -o pcre2_match.o

-include pcre2_match_data.d
pcre2_match_data.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_match_data.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_match_data.c -o pcre2_match_data.o

-include pcre2_newline.d
pcre2_newline.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_newline.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_newline.c -o pcre2_newline.o

-include pcre2_ord2utf.d
pcre2_ord2utf.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_ord2utf.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_ord2utf.c -o pcre2_ord2utf.o

-include pcre2_pattern_info.d
pcre2_pattern_info.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_pattern_info.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_pattern_info.c -o pcre2_pattern_info.o

-include pcre2_script_run.d
pcre2_script_run.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_script_run.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_script_run.c -o pcre2_script_run.o

-include pcre2_serialize.d
pcre2_serialize.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_serialize.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_serialize.c -o pcre2_serialize.o

-include pcre2_string_utils.d
pcre2_string_utils.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_string_utils.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_string_utils.c -o pcre2_string_utils.o

-include pcre2_study.d
pcre2_study.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_study.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_study.c -o pcre2_study.o

-include pcre2_substitute.d
pcre2_substitute.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_substitute.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_substitute.c -o pcre2_substitute.o

-include pcre2_substring.d
pcre2_substring.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_substring.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_substring.c -o pcre2_substring.o

-include pcre2_tables.d
pcre2_tables.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_tables.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_tables.c -o pcre2_tables.o

-include pcre2_ucd.d
pcre2_ucd.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_ucd.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_ucd.c -o pcre2_ucd.o

-include pcre2_ucptables.d
pcre2_ucptables.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_ucptables.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_ucptables.c -o pcre2_ucptables.o

-include pcre2_valid_utf.d
pcre2_valid_utf.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_valid_utf.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_valid_utf.c -o pcre2_valid_utf.o

-include pcre2_xclass.d
pcre2_xclass.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_xclass.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/pcre/pcre2_xclass.c -o pcre2_xclass.o

-include adler32.d
adler32.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/zlib/adler32.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/zlib/adler32.c -o adler32.o

-include crc32.d
crc32.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/zlib/crc32.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/zlib/crc32.c -o crc32.o

-include deflate.d
deflate.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/zlib/deflate.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/zlib/deflate.c -o deflate.o

-include inffast.d
inffast.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/zlib/inffast.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/zlib/inffast.c -o inffast.o

-include inflate.d
inflate.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/zlib/inflate.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/zlib/inflate.c -o inflate.o

-include inftrees.d
inftrees.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/zlib/inftrees.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/zlib/inftrees.c -o inftrees.o

-include trees.d
trees.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/zlib/trees.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/zlib/trees.c -o trees.o

-include zutil.d
zutil.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/zlib/zutil.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/include/zlib/zutil.c -o zutil.o

-include sha1_.d
sha1_.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/libs/fmt/sha1.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/libs/fmt/sha1.c -o sha1_.o

-include ssl.d
ssl.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/libs/ssl/ssl.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/libs/ssl/ssl.c -o ssl.o

-include gc.d
gc.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/src/gc.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/src/gc.c -o gc.o

-include array.d
array.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/src/std/array.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/src/std/array.c -o array.o

-include buffer.d
buffer.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/src/std/buffer.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/src/std/buffer.c -o buffer.o

-include bytes.d
bytes.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/src/std/bytes.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/src/std/bytes.c -o bytes.o

-include cast.d
cast.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/src/std/cast.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/src/std/cast.c -o cast.o

-include date.d
date.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/src/std/date.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/src/std/date.c -o date.o

-include error_.d
error_.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/src/std/error.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/src/std/error.c -o error_.o

-include file.d
file.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/src/std/file.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/src/std/file.c -o file.o

-include fun.d
fun.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/src/std/fun.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/src/std/fun.c -o fun.o

-include maps.d
maps.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/src/std/maps.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/src/std/maps.c -o maps.o

-include math.d
math.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/src/std/math.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/src/std/math.c -o math.o

-include obj.d
obj.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/src/std/obj.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/src/std/obj.c -o obj.o

-include process.d
process.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/src/std/process.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/src/std/process.c -o process.o

-include random.d
random.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/src/std/random.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/src/std/random.c -o random.o

-include regexp.d
regexp.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/src/std/regexp.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/src/std/regexp.c -o regexp.o

-include socket.d
socket.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/src/std/socket.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/src/std/socket.c -o socket.o

-include string.d
string.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/src/std/string.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/src/std/string.c -o string.o

-include sys.d
sys.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/src/std/sys.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/src/std/sys.c -o sys.o

-include sys_android.d
sys_android.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/src/std/sys_android.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/src/std/sys_android.c -o sys_android.o

-include thread.d
thread.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/src/std/thread.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/src/std/thread.c -o thread.o

-include track.d
track.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/src/std/track.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/src/std/track.c -o track.o

-include types.d
types.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/src/std/types.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/src/std/types.c -o types.o

-include ucs2.d
ucs2.o: ../../../armsdk/Kha/Backends/Kinc-HL/hl/src/std/ucs2.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/hl/src/std/ucs2.c -o ucs2.o

-include bridge.d
bridge.o: ../../../armsdk/Kha/Backends/Kinc-HL/kinc-bridge/bridge.c
	gcc  -O2 $(INC) $(DEF) -MD $(CFLAGS) -c ../../../armsdk/Kha/Backends/Kinc-HL/kinc-bridge/bridge.c -o bridge.o

-include btaxissweep3.d
btaxissweep3.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/BroadphaseCollision/btAxisSweep3.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/BroadphaseCollision/btAxisSweep3.cpp -o btaxissweep3.o

-include btbroadphaseproxy.d
btbroadphaseproxy.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/BroadphaseCollision/btBroadphaseProxy.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/BroadphaseCollision/btBroadphaseProxy.cpp -o btbroadphaseproxy.o

-include btcollisionalgorithm.d
btcollisionalgorithm.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/BroadphaseCollision/btCollisionAlgorithm.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/BroadphaseCollision/btCollisionAlgorithm.cpp -o btcollisionalgorithm.o

-include btdbvt.d
btdbvt.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/BroadphaseCollision/btDbvt.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/BroadphaseCollision/btDbvt.cpp -o btdbvt.o

-include btdbvtbroadphase.d
btdbvtbroadphase.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/BroadphaseCollision/btDbvtBroadphase.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/BroadphaseCollision/btDbvtBroadphase.cpp -o btdbvtbroadphase.o

-include btdispatcher.d
btdispatcher.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/BroadphaseCollision/btDispatcher.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/BroadphaseCollision/btDispatcher.cpp -o btdispatcher.o

-include btoverlappingpaircache.d
btoverlappingpaircache.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/BroadphaseCollision/btOverlappingPairCache.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/BroadphaseCollision/btOverlappingPairCache.cpp -o btoverlappingpaircache.o

-include btquantizedbvh.d
btquantizedbvh.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/BroadphaseCollision/btQuantizedBvh.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/BroadphaseCollision/btQuantizedBvh.cpp -o btquantizedbvh.o

-include btsimplebroadphase.d
btsimplebroadphase.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/BroadphaseCollision/btSimpleBroadphase.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/BroadphaseCollision/btSimpleBroadphase.cpp -o btsimplebroadphase.o

-include spheretriangledetector.d
spheretriangledetector.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/SphereTriangleDetector.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/SphereTriangleDetector.cpp -o spheretriangledetector.o

-include btactivatingcollisionalgorithm.d
btactivatingcollisionalgorithm.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btActivatingCollisionAlgorithm.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btActivatingCollisionAlgorithm.cpp -o btactivatingcollisionalgorithm.o

-include btbox2dbox2dcollisionalgorithm.d
btbox2dbox2dcollisionalgorithm.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btBox2dBox2dCollisionAlgorithm.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btBox2dBox2dCollisionAlgorithm.cpp -o btbox2dbox2dcollisionalgorithm.o

-include btboxboxcollisionalgorithm.d
btboxboxcollisionalgorithm.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btBoxBoxCollisionAlgorithm.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btBoxBoxCollisionAlgorithm.cpp -o btboxboxcollisionalgorithm.o

-include btboxboxdetector.d
btboxboxdetector.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btBoxBoxDetector.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btBoxBoxDetector.cpp -o btboxboxdetector.o

-include btcollisiondispatcher.d
btcollisiondispatcher.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btCollisionDispatcher.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btCollisionDispatcher.cpp -o btcollisiondispatcher.o

-include btcollisiondispatchermt.d
btcollisiondispatchermt.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btCollisionDispatcherMt.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btCollisionDispatcherMt.cpp -o btcollisiondispatchermt.o

-include btcollisionobject.d
btcollisionobject.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btCollisionObject.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btCollisionObject.cpp -o btcollisionobject.o

-include btcollisionworld.d
btcollisionworld.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btCollisionWorld.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btCollisionWorld.cpp -o btcollisionworld.o

-include btcollisionworldimporter.d
btcollisionworldimporter.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btCollisionWorldImporter.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btCollisionWorldImporter.cpp -o btcollisionworldimporter.o

-include btcompoundcollisionalgorithm.d
btcompoundcollisionalgorithm.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btCompoundCollisionAlgorithm.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btCompoundCollisionAlgorithm.cpp -o btcompoundcollisionalgorithm.o

-include btcompoundcompoundcollisionalgorithm.d
btcompoundcompoundcollisionalgorithm.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btCompoundCompoundCollisionAlgorithm.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btCompoundCompoundCollisionAlgorithm.cpp -o btcompoundcompoundcollisionalgorithm.o

-include btconvex2dconvex2dalgorithm.d
btconvex2dconvex2dalgorithm.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btConvex2dConvex2dAlgorithm.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btConvex2dConvex2dAlgorithm.cpp -o btconvex2dconvex2dalgorithm.o

-include btconvexconcavecollisionalgorithm.d
btconvexconcavecollisionalgorithm.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btConvexConcaveCollisionAlgorithm.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btConvexConcaveCollisionAlgorithm.cpp -o btconvexconcavecollisionalgorithm.o

-include btconvexconvexalgorithm.d
btconvexconvexalgorithm.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btConvexConvexAlgorithm.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btConvexConvexAlgorithm.cpp -o btconvexconvexalgorithm.o

-include btconvexplanecollisionalgorithm.d
btconvexplanecollisionalgorithm.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btConvexPlaneCollisionAlgorithm.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btConvexPlaneCollisionAlgorithm.cpp -o btconvexplanecollisionalgorithm.o

-include btdefaultcollisionconfiguration.d
btdefaultcollisionconfiguration.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btDefaultCollisionConfiguration.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btDefaultCollisionConfiguration.cpp -o btdefaultcollisionconfiguration.o

-include btemptycollisionalgorithm.d
btemptycollisionalgorithm.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btEmptyCollisionAlgorithm.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btEmptyCollisionAlgorithm.cpp -o btemptycollisionalgorithm.o

-include btghostobject.d
btghostobject.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btGhostObject.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btGhostObject.cpp -o btghostobject.o

-include bthashedsimplepaircache.d
bthashedsimplepaircache.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btHashedSimplePairCache.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btHashedSimplePairCache.cpp -o bthashedsimplepaircache.o

-include btinternaledgeutility.d
btinternaledgeutility.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btInternalEdgeUtility.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btInternalEdgeUtility.cpp -o btinternaledgeutility.o

-include btmanifoldresult.d
btmanifoldresult.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btManifoldResult.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btManifoldResult.cpp -o btmanifoldresult.o

-include btsimulationislandmanager.d
btsimulationislandmanager.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btSimulationIslandManager.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btSimulationIslandManager.cpp -o btsimulationislandmanager.o

-include btsphereboxcollisionalgorithm.d
btsphereboxcollisionalgorithm.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btSphereBoxCollisionAlgorithm.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btSphereBoxCollisionAlgorithm.cpp -o btsphereboxcollisionalgorithm.o

-include btspherespherecollisionalgorithm.d
btspherespherecollisionalgorithm.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btSphereSphereCollisionAlgorithm.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btSphereSphereCollisionAlgorithm.cpp -o btspherespherecollisionalgorithm.o

-include btspheretrianglecollisionalgorithm.d
btspheretrianglecollisionalgorithm.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btSphereTriangleCollisionAlgorithm.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btSphereTriangleCollisionAlgorithm.cpp -o btspheretrianglecollisionalgorithm.o

-include btunionfind.d
btunionfind.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btUnionFind.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionDispatch/btUnionFind.cpp -o btunionfind.o

-include btbox2dshape.d
btbox2dshape.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btBox2dShape.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btBox2dShape.cpp -o btbox2dshape.o

-include btboxshape.d
btboxshape.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btBoxShape.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btBoxShape.cpp -o btboxshape.o

-include btbvhtrianglemeshshape.d
btbvhtrianglemeshshape.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btBvhTriangleMeshShape.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btBvhTriangleMeshShape.cpp -o btbvhtrianglemeshshape.o

-include btcapsuleshape.d
btcapsuleshape.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btCapsuleShape.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btCapsuleShape.cpp -o btcapsuleshape.o

-include btcollisionshape.d
btcollisionshape.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btCollisionShape.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btCollisionShape.cpp -o btcollisionshape.o

-include btcompoundshape.d
btcompoundshape.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btCompoundShape.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btCompoundShape.cpp -o btcompoundshape.o

-include btconcaveshape.d
btconcaveshape.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btConcaveShape.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btConcaveShape.cpp -o btconcaveshape.o

-include btconeshape.d
btconeshape.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btConeShape.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btConeShape.cpp -o btconeshape.o

-include btconvex2dshape.d
btconvex2dshape.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btConvex2dShape.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btConvex2dShape.cpp -o btconvex2dshape.o

-include btconvexhullshape.d
btconvexhullshape.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btConvexHullShape.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btConvexHullShape.cpp -o btconvexhullshape.o

-include btconvexinternalshape.d
btconvexinternalshape.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btConvexInternalShape.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btConvexInternalShape.cpp -o btconvexinternalshape.o

-include btconvexpointcloudshape.d
btconvexpointcloudshape.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btConvexPointCloudShape.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btConvexPointCloudShape.cpp -o btconvexpointcloudshape.o

-include btconvexpolyhedron.d
btconvexpolyhedron.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btConvexPolyhedron.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btConvexPolyhedron.cpp -o btconvexpolyhedron.o

-include btconvexshape.d
btconvexshape.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btConvexShape.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btConvexShape.cpp -o btconvexshape.o

-include btconvextrianglemeshshape.d
btconvextrianglemeshshape.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btConvexTriangleMeshShape.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btConvexTriangleMeshShape.cpp -o btconvextrianglemeshshape.o

-include btcylindershape.d
btcylindershape.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btCylinderShape.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btCylinderShape.cpp -o btcylindershape.o

-include btemptyshape.d
btemptyshape.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btEmptyShape.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btEmptyShape.cpp -o btemptyshape.o

-include btheightfieldterrainshape.d
btheightfieldterrainshape.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btHeightfieldTerrainShape.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btHeightfieldTerrainShape.cpp -o btheightfieldterrainshape.o

-include btminkowskisumshape.d
btminkowskisumshape.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btMinkowskiSumShape.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btMinkowskiSumShape.cpp -o btminkowskisumshape.o

-include btmultisphereshape.d
btmultisphereshape.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btMultiSphereShape.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btMultiSphereShape.cpp -o btmultisphereshape.o

-include btmultimaterialtrianglemeshshape.d
btmultimaterialtrianglemeshshape.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btMultimaterialTriangleMeshShape.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btMultimaterialTriangleMeshShape.cpp -o btmultimaterialtrianglemeshshape.o

-include btoptimizedbvh.d
btoptimizedbvh.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btOptimizedBvh.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btOptimizedBvh.cpp -o btoptimizedbvh.o

-include btpolyhedralconvexshape.d
btpolyhedralconvexshape.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btPolyhedralConvexShape.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btPolyhedralConvexShape.cpp -o btpolyhedralconvexshape.o

-include btscaledbvhtrianglemeshshape.d
btscaledbvhtrianglemeshshape.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btScaledBvhTriangleMeshShape.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btScaledBvhTriangleMeshShape.cpp -o btscaledbvhtrianglemeshshape.o

-include btshapehull.d
btshapehull.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btShapeHull.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btShapeHull.cpp -o btshapehull.o

-include btsphereshape.d
btsphereshape.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btSphereShape.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btSphereShape.cpp -o btsphereshape.o

-include btstaticplaneshape.d
btstaticplaneshape.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btStaticPlaneShape.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btStaticPlaneShape.cpp -o btstaticplaneshape.o

-include btstridingmeshinterface.d
btstridingmeshinterface.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btStridingMeshInterface.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btStridingMeshInterface.cpp -o btstridingmeshinterface.o

-include bttetrahedronshape.d
bttetrahedronshape.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btTetrahedronShape.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btTetrahedronShape.cpp -o bttetrahedronshape.o

-include bttrianglebuffer.d
bttrianglebuffer.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btTriangleBuffer.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btTriangleBuffer.cpp -o bttrianglebuffer.o

-include bttrianglecallback.d
bttrianglecallback.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btTriangleCallback.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btTriangleCallback.cpp -o bttrianglecallback.o

-include bttriangleindexvertexarray.d
bttriangleindexvertexarray.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btTriangleIndexVertexArray.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btTriangleIndexVertexArray.cpp -o bttriangleindexvertexarray.o

-include bttriangleindexvertexmaterialarray.d
bttriangleindexvertexmaterialarray.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btTriangleIndexVertexMaterialArray.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btTriangleIndexVertexMaterialArray.cpp -o bttriangleindexvertexmaterialarray.o

-include bttrianglemesh.d
bttrianglemesh.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btTriangleMesh.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btTriangleMesh.cpp -o bttrianglemesh.o

-include bttrianglemeshshape.d
bttrianglemeshshape.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btTriangleMeshShape.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btTriangleMeshShape.cpp -o bttrianglemeshshape.o

-include btuniformscalingshape.d
btuniformscalingshape.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btUniformScalingShape.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/CollisionShapes/btUniformScalingShape.cpp -o btuniformscalingshape.o

-include btcontactprocessing.d
btcontactprocessing.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/Gimpact/btContactProcessing.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/Gimpact/btContactProcessing.cpp -o btcontactprocessing.o

-include btgimpactbvh.d
btgimpactbvh.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/Gimpact/btGImpactBvh.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/Gimpact/btGImpactBvh.cpp -o btgimpactbvh.o

-include btgimpactcollisionalgorithm.d
btgimpactcollisionalgorithm.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/Gimpact/btGImpactCollisionAlgorithm.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/Gimpact/btGImpactCollisionAlgorithm.cpp -o btgimpactcollisionalgorithm.o

-include btgimpactquantizedbvh.d
btgimpactquantizedbvh.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/Gimpact/btGImpactQuantizedBvh.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/Gimpact/btGImpactQuantizedBvh.cpp -o btgimpactquantizedbvh.o

-include btgimpactshape.d
btgimpactshape.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/Gimpact/btGImpactShape.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/Gimpact/btGImpactShape.cpp -o btgimpactshape.o

-include btgenericpoolallocator.d
btgenericpoolallocator.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/Gimpact/btGenericPoolAllocator.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/Gimpact/btGenericPoolAllocator.cpp -o btgenericpoolallocator.o

-include bttriangleshapeex.d
bttriangleshapeex.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/Gimpact/btTriangleShapeEx.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/Gimpact/btTriangleShapeEx.cpp -o bttriangleshapeex.o

-include gim_box_set.d
gim_box_set.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/Gimpact/gim_box_set.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/Gimpact/gim_box_set.cpp -o gim_box_set.o

-include gim_contact.d
gim_contact.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/Gimpact/gim_contact.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/Gimpact/gim_contact.cpp -o gim_contact.o

-include gim_memory.d
gim_memory.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/Gimpact/gim_memory.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/Gimpact/gim_memory.cpp -o gim_memory.o

-include gim_tri_collision.d
gim_tri_collision.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/Gimpact/gim_tri_collision.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/Gimpact/gim_tri_collision.cpp -o gim_tri_collision.o

-include btcontinuousconvexcollision.d
btcontinuousconvexcollision.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/NarrowPhaseCollision/btContinuousConvexCollision.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/NarrowPhaseCollision/btContinuousConvexCollision.cpp -o btcontinuousconvexcollision.o

-include btconvexcast.d
btconvexcast.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/NarrowPhaseCollision/btConvexCast.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/NarrowPhaseCollision/btConvexCast.cpp -o btconvexcast.o

-include btgjkconvexcast.d
btgjkconvexcast.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/NarrowPhaseCollision/btGjkConvexCast.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/NarrowPhaseCollision/btGjkConvexCast.cpp -o btgjkconvexcast.o

-include btgjkepa2.d
btgjkepa2.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/NarrowPhaseCollision/btGjkEpa2.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/NarrowPhaseCollision/btGjkEpa2.cpp -o btgjkepa2.o

-include btgjkepapenetrationdepthsolver.d
btgjkepapenetrationdepthsolver.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/NarrowPhaseCollision/btGjkEpaPenetrationDepthSolver.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/NarrowPhaseCollision/btGjkEpaPenetrationDepthSolver.cpp -o btgjkepapenetrationdepthsolver.o

-include btgjkpairdetector.d
btgjkpairdetector.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/NarrowPhaseCollision/btGjkPairDetector.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/NarrowPhaseCollision/btGjkPairDetector.cpp -o btgjkpairdetector.o

-include btminkowskipenetrationdepthsolver.d
btminkowskipenetrationdepthsolver.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/NarrowPhaseCollision/btMinkowskiPenetrationDepthSolver.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/NarrowPhaseCollision/btMinkowskiPenetrationDepthSolver.cpp -o btminkowskipenetrationdepthsolver.o

-include btpersistentmanifold.d
btpersistentmanifold.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/NarrowPhaseCollision/btPersistentManifold.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/NarrowPhaseCollision/btPersistentManifold.cpp -o btpersistentmanifold.o

-include btpolyhedralcontactclipping.d
btpolyhedralcontactclipping.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/NarrowPhaseCollision/btPolyhedralContactClipping.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/NarrowPhaseCollision/btPolyhedralContactClipping.cpp -o btpolyhedralcontactclipping.o

-include btraycastcallback.d
btraycastcallback.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/NarrowPhaseCollision/btRaycastCallback.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/NarrowPhaseCollision/btRaycastCallback.cpp -o btraycastcallback.o

-include btsubsimplexconvexcast.d
btsubsimplexconvexcast.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/NarrowPhaseCollision/btSubSimplexConvexCast.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/NarrowPhaseCollision/btSubSimplexConvexCast.cpp -o btsubsimplexconvexcast.o

-include btvoronoisimplexsolver.d
btvoronoisimplexsolver.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/NarrowPhaseCollision/btVoronoiSimplexSolver.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletCollision/NarrowPhaseCollision/btVoronoiSimplexSolver.cpp -o btvoronoisimplexsolver.o

-include btkinematiccharactercontroller.d
btkinematiccharactercontroller.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/Character/btKinematicCharacterController.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/Character/btKinematicCharacterController.cpp -o btkinematiccharactercontroller.o

-include btconetwistconstraint.d
btconetwistconstraint.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/ConstraintSolver/btConeTwistConstraint.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/ConstraintSolver/btConeTwistConstraint.cpp -o btconetwistconstraint.o

-include btcontactconstraint.d
btcontactconstraint.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/ConstraintSolver/btContactConstraint.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/ConstraintSolver/btContactConstraint.cpp -o btcontactconstraint.o

-include btfixedconstraint.d
btfixedconstraint.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/ConstraintSolver/btFixedConstraint.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/ConstraintSolver/btFixedConstraint.cpp -o btfixedconstraint.o

-include btgearconstraint.d
btgearconstraint.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/ConstraintSolver/btGearConstraint.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/ConstraintSolver/btGearConstraint.cpp -o btgearconstraint.o

-include btgeneric6dofconstraint.d
btgeneric6dofconstraint.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/ConstraintSolver/btGeneric6DofConstraint.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/ConstraintSolver/btGeneric6DofConstraint.cpp -o btgeneric6dofconstraint.o

-include btgeneric6dofspring2constraint.d
btgeneric6dofspring2constraint.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/ConstraintSolver/btGeneric6DofSpring2Constraint.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/ConstraintSolver/btGeneric6DofSpring2Constraint.cpp -o btgeneric6dofspring2constraint.o

-include btgeneric6dofspringconstraint.d
btgeneric6dofspringconstraint.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/ConstraintSolver/btGeneric6DofSpringConstraint.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/ConstraintSolver/btGeneric6DofSpringConstraint.cpp -o btgeneric6dofspringconstraint.o

-include bthinge2constraint.d
bthinge2constraint.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/ConstraintSolver/btHinge2Constraint.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/ConstraintSolver/btHinge2Constraint.cpp -o bthinge2constraint.o

-include bthingeconstraint.d
bthingeconstraint.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/ConstraintSolver/btHingeConstraint.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/ConstraintSolver/btHingeConstraint.cpp -o bthingeconstraint.o

-include btnncgconstraintsolver.d
btnncgconstraintsolver.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/ConstraintSolver/btNNCGConstraintSolver.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/ConstraintSolver/btNNCGConstraintSolver.cpp -o btnncgconstraintsolver.o

-include btpoint2pointconstraint.d
btpoint2pointconstraint.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/ConstraintSolver/btPoint2PointConstraint.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/ConstraintSolver/btPoint2PointConstraint.cpp -o btpoint2pointconstraint.o

-include btsequentialimpulseconstraintsolver.d
btsequentialimpulseconstraintsolver.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/ConstraintSolver/btSequentialImpulseConstraintSolver.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/ConstraintSolver/btSequentialImpulseConstraintSolver.cpp -o btsequentialimpulseconstraintsolver.o

-include btsliderconstraint.d
btsliderconstraint.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/ConstraintSolver/btSliderConstraint.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/ConstraintSolver/btSliderConstraint.cpp -o btsliderconstraint.o

-include btsolve2linearconstraint.d
btsolve2linearconstraint.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/ConstraintSolver/btSolve2LinearConstraint.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/ConstraintSolver/btSolve2LinearConstraint.cpp -o btsolve2linearconstraint.o

-include bttypedconstraint.d
bttypedconstraint.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/ConstraintSolver/btTypedConstraint.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/ConstraintSolver/btTypedConstraint.cpp -o bttypedconstraint.o

-include btuniversalconstraint.d
btuniversalconstraint.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/ConstraintSolver/btUniversalConstraint.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/ConstraintSolver/btUniversalConstraint.cpp -o btuniversalconstraint.o

-include btdiscretedynamicsworld.d
btdiscretedynamicsworld.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/Dynamics/btDiscreteDynamicsWorld.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/Dynamics/btDiscreteDynamicsWorld.cpp -o btdiscretedynamicsworld.o

-include btdiscretedynamicsworldmt.d
btdiscretedynamicsworldmt.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/Dynamics/btDiscreteDynamicsWorldMt.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/Dynamics/btDiscreteDynamicsWorldMt.cpp -o btdiscretedynamicsworldmt.o

-include btrigidbody.d
btrigidbody.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/Dynamics/btRigidBody.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/Dynamics/btRigidBody.cpp -o btrigidbody.o

-include btsimpledynamicsworld.d
btsimpledynamicsworld.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/Dynamics/btSimpleDynamicsWorld.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/Dynamics/btSimpleDynamicsWorld.cpp -o btsimpledynamicsworld.o

-include btsimulationislandmanagermt.d
btsimulationislandmanagermt.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/Dynamics/btSimulationIslandManagerMt.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/Dynamics/btSimulationIslandManagerMt.cpp -o btsimulationislandmanagermt.o

-include btmultibody.d
btmultibody.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/Featherstone/btMultiBody.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/Featherstone/btMultiBody.cpp -o btmultibody.o

-include btmultibodyconstraint.d
btmultibodyconstraint.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/Featherstone/btMultiBodyConstraint.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/Featherstone/btMultiBodyConstraint.cpp -o btmultibodyconstraint.o

-include btmultibodyconstraintsolver.d
btmultibodyconstraintsolver.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/Featherstone/btMultiBodyConstraintSolver.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/Featherstone/btMultiBodyConstraintSolver.cpp -o btmultibodyconstraintsolver.o

-include btmultibodydynamicsworld.d
btmultibodydynamicsworld.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/Featherstone/btMultiBodyDynamicsWorld.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/Featherstone/btMultiBodyDynamicsWorld.cpp -o btmultibodydynamicsworld.o

-include btmultibodyfixedconstraint.d
btmultibodyfixedconstraint.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/Featherstone/btMultiBodyFixedConstraint.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/Featherstone/btMultiBodyFixedConstraint.cpp -o btmultibodyfixedconstraint.o

-include btmultibodygearconstraint.d
btmultibodygearconstraint.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/Featherstone/btMultiBodyGearConstraint.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/Featherstone/btMultiBodyGearConstraint.cpp -o btmultibodygearconstraint.o

-include btmultibodyjointlimitconstraint.d
btmultibodyjointlimitconstraint.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/Featherstone/btMultiBodyJointLimitConstraint.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/Featherstone/btMultiBodyJointLimitConstraint.cpp -o btmultibodyjointlimitconstraint.o

-include btmultibodyjointmotor.d
btmultibodyjointmotor.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/Featherstone/btMultiBodyJointMotor.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/Featherstone/btMultiBodyJointMotor.cpp -o btmultibodyjointmotor.o

-include btmultibodypoint2point.d
btmultibodypoint2point.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/Featherstone/btMultiBodyPoint2Point.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/Featherstone/btMultiBodyPoint2Point.cpp -o btmultibodypoint2point.o

-include btmultibodysliderconstraint.d
btmultibodysliderconstraint.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/Featherstone/btMultiBodySliderConstraint.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/Featherstone/btMultiBodySliderConstraint.cpp -o btmultibodysliderconstraint.o

-include btdantziglcp.d
btdantziglcp.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/MLCPSolvers/btDantzigLCP.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/MLCPSolvers/btDantzigLCP.cpp -o btdantziglcp.o

-include btlemkealgorithm.d
btlemkealgorithm.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/MLCPSolvers/btLemkeAlgorithm.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/MLCPSolvers/btLemkeAlgorithm.cpp -o btlemkealgorithm.o

-include btmlcpsolver.d
btmlcpsolver.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/MLCPSolvers/btMLCPSolver.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/MLCPSolvers/btMLCPSolver.cpp -o btmlcpsolver.o

-include btraycastvehicle.d
btraycastvehicle.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/Vehicle/btRaycastVehicle.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/Vehicle/btRaycastVehicle.cpp -o btraycastvehicle.o

-include btwheelinfo.d
btwheelinfo.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/Vehicle/btWheelInfo.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletDynamics/Vehicle/btWheelInfo.cpp -o btwheelinfo.o

-include btdefaultsoftbodysolver.d
btdefaultsoftbodysolver.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletSoftBody/btDefaultSoftBodySolver.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletSoftBody/btDefaultSoftBodySolver.cpp -o btdefaultsoftbodysolver.o

-include btsoftbody.d
btsoftbody.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletSoftBody/btSoftBody.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletSoftBody/btSoftBody.cpp -o btsoftbody.o

-include btsoftbodyconcavecollisionalgorithm.d
btsoftbodyconcavecollisionalgorithm.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletSoftBody/btSoftBodyConcaveCollisionAlgorithm.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletSoftBody/btSoftBodyConcaveCollisionAlgorithm.cpp -o btsoftbodyconcavecollisionalgorithm.o

-include btsoftbodyhelpers.d
btsoftbodyhelpers.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletSoftBody/btSoftBodyHelpers.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletSoftBody/btSoftBodyHelpers.cpp -o btsoftbodyhelpers.o

-include btsoftbodyrigidbodycollisionconfiguration.d
btsoftbodyrigidbodycollisionconfiguration.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletSoftBody/btSoftBodyRigidBodyCollisionConfiguration.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletSoftBody/btSoftBodyRigidBodyCollisionConfiguration.cpp -o btsoftbodyrigidbodycollisionconfiguration.o

-include btsoftmultibodydynamicsworld.d
btsoftmultibodydynamicsworld.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletSoftBody/btSoftMultiBodyDynamicsWorld.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletSoftBody/btSoftMultiBodyDynamicsWorld.cpp -o btsoftmultibodydynamicsworld.o

-include btsoftrigidcollisionalgorithm.d
btsoftrigidcollisionalgorithm.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletSoftBody/btSoftRigidCollisionAlgorithm.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletSoftBody/btSoftRigidCollisionAlgorithm.cpp -o btsoftrigidcollisionalgorithm.o

-include btsoftrigiddynamicsworld.d
btsoftrigiddynamicsworld.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletSoftBody/btSoftRigidDynamicsWorld.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletSoftBody/btSoftRigidDynamicsWorld.cpp -o btsoftrigiddynamicsworld.o

-include btsoftsoftcollisionalgorithm.d
btsoftsoftcollisionalgorithm.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletSoftBody/btSoftSoftCollisionAlgorithm.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/BulletSoftBody/btSoftSoftCollisionAlgorithm.cpp -o btsoftsoftcollisionalgorithm.o

-include btalignedallocator.d
btalignedallocator.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/LinearMath/btAlignedAllocator.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/LinearMath/btAlignedAllocator.cpp -o btalignedallocator.o

-include btconvexhull.d
btconvexhull.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/LinearMath/btConvexHull.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/LinearMath/btConvexHull.cpp -o btconvexhull.o

-include btconvexhullcomputer.d
btconvexhullcomputer.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/LinearMath/btConvexHullComputer.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/LinearMath/btConvexHullComputer.cpp -o btconvexhullcomputer.o

-include btgeometryutil.d
btgeometryutil.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/LinearMath/btGeometryUtil.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/LinearMath/btGeometryUtil.cpp -o btgeometryutil.o

-include btpolardecomposition.d
btpolardecomposition.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/LinearMath/btPolarDecomposition.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/LinearMath/btPolarDecomposition.cpp -o btpolardecomposition.o

-include btquickprof.d
btquickprof.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/LinearMath/btQuickprof.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/LinearMath/btQuickprof.cpp -o btquickprof.o

-include btserializer.d
btserializer.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/LinearMath/btSerializer.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/LinearMath/btSerializer.cpp -o btserializer.o

-include btserializer64.d
btserializer64.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/LinearMath/btSerializer64.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/LinearMath/btSerializer64.cpp -o btserializer64.o

-include btthreads.d
btthreads.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/LinearMath/btThreads.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/LinearMath/btThreads.cpp -o btthreads.o

-include btvector3.d
btvector3.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/LinearMath/btVector3.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/bullet/LinearMath/btVector3.cpp -o btvector3.o

-include debugdrawer.d
debugdrawer.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/hl/DebugDrawer.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/hl/DebugDrawer.cpp -o debugdrawer.o

-include bullet.d
bullet.o: ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/hl/bullet.cpp
	g++  -O2 $(INC) $(DEF) -MD $(CPPFLAGS) -c ../../../../../../../../home/david/myProjects/balder3d/armsdk/lib/haxebullet/hl/bullet.cpp -o bullet.o
