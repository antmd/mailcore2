#!/bin/sh

pushd "`dirname "$0"`" > /dev/null
scriptpath="`pwd`"
popd > /dev/null

. "$scriptpath/include.sh/build-dep.sh"

url="https://github.com/mailcore/mailcore2.git"
rev=c519d475178d09651271913f3453a4820fdd82b4
name="mailcore2-framework-ios"
xcode_target="mailcore ios"
xcode_project="mailcore2.xcodeproj"
library="MailCore.framework"
embedded_deps="ctemplate-ios libetpan-ios tidy-html5-ios"

build_git_ios
