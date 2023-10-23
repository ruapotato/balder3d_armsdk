# README #

This README would normally document whatever steps are necessary to get your application up and running.

### What is this repository for? ###

* Quick summary
* Version
* [Learn Markdown](https://bitbucket.org/tutorials/markdowndemo)

### How do I get set up? ###

* Download latest blender and extract to project folder
* Download latest armsdk and extract to project folder
* Open blender and install and enabled armsdk plugin
* Open blender file
* Under Render tab, press Publish
* `cd balder3d`
* cd to build folder: `cd ./build_balder3d/linux-hl-build/Release/`
* `make -j16`
* `cd ../../linux-hl`
* `cp ../../slimeball.ogg ./data/`
* `mv ../linux-hl-build/Release/balder3d* ./`
* `./balder3d*`

### Contribution guidelines ###

* Writing tests
* Code review
* Other guidelines

### Who do I talk to? ###

* Repo owner or admin
* Other community or team contact
