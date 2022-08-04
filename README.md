# hello

Simple hello world in C including Makefile and CI/CD definitions for various Git providers.

25.5.2021 Beat Rubischon <beat@0x1b.ch> - initial version

4.8.2022 Beat Rubischon <beat@0x1b.ch> - add CI/CD integration

This program is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option) any later version.

Directory content:

```
.
├── README.md									This file
├── COPYING                   License
├── .gitignore                Ignore OS X stuff
├── .github
│   └── workflows
│       ├── ci-cd.yml         GitHub CI/CD
├── .gitlab-ci.yml            GitLab CI/CD
├── bitbucket-pipelines.yml   Bitbucket CI/CD
├── Makefile                  Makefile
└── hello.c                   Source
```

For the pipeline output see:

* https://gitlab.com/beatrubi/hello/-/pipelines
* https://github.com/beatrubi/hello/actions
* https://bitbucket.org/beatrubi/hello/pipelines/results/page/1

