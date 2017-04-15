# C SQ-Scanner-based project analyzed on SonarQube.com using Travis

[![Build status](https://travis-ci.org/SonarSource/sq-com_example_c-sqscanner-travis.svg?branch=master)](https://travis-ci.org/SonarSource/sq-com_example_c-sqscanner-travis) [![Quality Gate](https://sonarqube.com/api/badges/gate?key=com.sonarqube.examples.c-sqscanner-travis-project)](https://sonarqube.com/dashboard/index/com.sonarqube.examples.c-sqscanner-travis-project)

#### This project is analysed on [SonarQube.com](https://sonarqube.com)!

It is very easy to run an analysis on a C/C++/Objective-C project and push it to SonarQube.com:

1. Create a `sonar-project.properties` files to store your configuration
2. In your `.travis.yml` file:
  1. Activate the SonarQube.com Travis Add-on
  2. Wrap your compilation with the Build Wrapper
  3. Run `sonar-scanner` later on

You can take a look at the
[sonar-project.properties](https://github.com/SonarSource/sq-com_example_c-sqscanner-travis/blob/master/sonar-project.properties)
and
[.travis.yml](https://github.com/SonarSource/sq-com_example_c-sqscanner-travis/blob/master/.travis.yml)
files of this project to see it in practice.

## Links

- [Documentation of the SonarQube Scanner](http://redirect.sonarsource.com/doc/install-configure-scanner.html)
- [Documentation of the C/C++/Objective-C plugin and its with Build Wrapper](http://docs.sonarqube.org/x/pwAv)
- [Documentation of the SonarQube.com Travis Add-on](https://docs.travis-ci.com/user/sonarqube/)

### License

Copyright 2016-2017 SonarSource.

Licensed under the [GNU Lesser General Public License, Version 3.0](http://www.gnu.org/licenses/lgpl.txt)