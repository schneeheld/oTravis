## Travis CI
[![Build Status](https://travis-ci.org/schneeheld/oTravis.svg?branch=master)](https://travis-ci.org/schneeheld/oTravis)

## Build
See ```Makefile``` for <i class="icon-cog"></i> **settings**.

## Skip Travis build

Travis-Ci a has nice feature which allows to skip making a build for certain push. Add `[ci skip]` into your commit's message to let Travis-Ci know,
that you do not want to perform tests for the next push.

```
git commit -m 'Documentation update [ci skip]'
```
