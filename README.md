name: Main File
on: push
jobs:
  first:
    runs-on: ubuntu-latest
    steps:
    - name: print
      run: echo Hello
