#!/usr/bin/env python
# setup.py generated by flit for tools that don't yet use PEP 517

from distutils.core import setup

packages = \
['cssselect2']

package_data = \
{'': ['*']}

install_requires = \
['tinycss2', 'webencodings']

extras_require = \
{'doc': ['sphinx', 'sphinx_rtd_theme'],
 'test': ['pytest',
          'pytest-cov',
          'pytest-flake8',
          'pytest-isort',
          'coverage[toml]']}

setup(name='cssselect2',
      version='%%PORTVERSION%%',
      description='CSS selectors for Python ElementTree',
      author=None,
      author_email='Simon Sapin <simon.sapin@exyr.org>',
      url=None,
      packages=packages,
      package_data=package_data,
      install_requires=install_requires,
      extras_require=extras_require,
      python_requires='>=3.7',
     )