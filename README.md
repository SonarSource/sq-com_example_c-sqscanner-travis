# C SQ-Scanner-based project analyzed on SonarCloud using Travis

[![Build status](https://travis-ci.org/SonarSource/sq-com_example_c-sqscanner-travis.svg?branch=master)](https://travis-ci.org/SonarSource/sq-com_example_c-sqscanner-travis) [![Quality Gate](https://sonarcloud.io/api/project_badges/measure?project=com.sonarqube.examples.c-sqscanner-travis-project&metric=alert_status)](https://sonarcloud.io/dashboard/index/com.sonarqube.examples.c-sqscanner-travis-project)

#### This project is analysed on [SonarCloud](https://sonarcloud.io)!

It is very easy to run an analysis on a C/C++/Objective-C project and push it to SonarCloud:

1. Create a `sonar-project.properties` files to store your configuration
2. In your `.travis.yml` file:
   1. Activate the [Travis Add-on](https://docs.travis-ci.com/user/sonarcloud/)
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
- [Documentation of the SonarCloud Travis Add-on](https://docs.travis-ci.com/user/sonarcloud/)
