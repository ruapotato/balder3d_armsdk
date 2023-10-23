let fs = require('fs');
let path = require('path');
let project = new Project('balder3d_1_0_124');
project.version = '1.0';
project.addDefine('HXCPP_API_LEVEL=400');
project.addDefine('HXCPP_DEBUG', 'Debug');
project.addDefine('HXCPP_GC_GENERATIONAL');
project.targetOptions = {"html5":{},"flash":{},"android":{},"android_native":{},"ios":{},"xboxOne":{},"playStation4":{},"switch":{},"xboxSeriesXS":{},"playStation5":{},"stadia":{}};
project.setDebugDir('build_balder3d/linux-hl');
await project.addProject('/matrix/david/main_home_folder/myProjects/balder3d/armsdk/Kha/Kinc');
await project.addProject('build_balder3d/linux-hl-build');
await project.addProject('/matrix/david/main_home_folder/myProjects/balder3d/armsdk/Kha/Backends/Kinc-HL');
if (fs.existsSync(path.join('/home/david/myProjects/balder3d/armsdk/armory', 'kfile.js')) || fs.existsSync(path.join('/home/david/myProjects/balder3d/armsdk/armory', 'kincfile.js')) || fs.existsSync(path.join('/home/david/myProjects/balder3d/armsdk/armory', 'korefile.js'))) {
	await project.addProject('/home/david/myProjects/balder3d/armsdk/armory');
}
if (fs.existsSync(path.join('/home/david/myProjects/balder3d/armsdk/iron', 'kfile.js')) || fs.existsSync(path.join('/home/david/myProjects/balder3d/armsdk/iron', 'kincfile.js')) || fs.existsSync(path.join('/home/david/myProjects/balder3d/armsdk/iron', 'korefile.js'))) {
	await project.addProject('/home/david/myProjects/balder3d/armsdk/iron');
}
if (fs.existsSync(path.join('/home/david/myProjects/balder3d/armsdk/lib/haxebullet', 'kfile.js')) || fs.existsSync(path.join('/home/david/myProjects/balder3d/armsdk/lib/haxebullet', 'kincfile.js')) || fs.existsSync(path.join('/home/david/myProjects/balder3d/armsdk/lib/haxebullet', 'korefile.js'))) {
	await project.addProject('/home/david/myProjects/balder3d/armsdk/lib/haxebullet');
}
if (fs.existsSync(path.join('/home/david/myProjects/balder3d/armsdk/lib/zui', 'kfile.js')) || fs.existsSync(path.join('/home/david/myProjects/balder3d/armsdk/lib/zui', 'kincfile.js')) || fs.existsSync(path.join('/home/david/myProjects/balder3d/armsdk/lib/zui', 'korefile.js'))) {
	await project.addProject('/home/david/myProjects/balder3d/armsdk/lib/zui');
}
project.flatten();
resolve(project);
