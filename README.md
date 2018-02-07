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

### Polling

To enable cross-platform polling
- Open a Jenkins client master
- Add **Global Tool Configuration** name `GIT` path `replace_with_linux_git_command`
- Navigate to **Manage Jenkins** > **Manage Nodes** and configure the agent properties
- Under **Node Properties** check **Tool Locations** and click the **Add** button
- Select `(Git) GIT` and set `C:\Program Files\Git\bin\git.exe` in the Home field
