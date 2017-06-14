#!/bin/sh

pushd "`dirname "$0"`" > /dev/null
scriptpath="`pwd`"
popd > /dev/null

. "$scriptpath/include.sh/build-dep.sh"

url="https://github.com/mailcore/mailcore2.git"
rev=3f97036fefc93e2cb23d8fcea4fc71a414a3ba43
name="mailcore2-framework-osx"
xcode_target="mailcore osx"
xcode_project="mailcore2.xcodeproj"
library="MailCore.framework"
embedded_deps="ctemplate-osx libetpan-osx"

build_git_osx
