# GXF Extension for Linux x86_64

Plain generated GXF Extension created based on Nvidia Graph [instructions](https://docs.nvidia.com/metropolis/deepstream/dev-guide/graphtools-docs/docs/text/GraphComposer_Dev_Workflow.html#generating-a-non-deepstream-gstreamer-extension). This application has one dependency on Nvidia pre-compiled USD [binaries](https://developer.nvidia.com/usd).

### Pre-requisites

- Ubuntu 20.04-x86_64
- Bazelisk 5.4.0+

### Before Running:

1. Install Nvidia [Deepstream SDK](https://docs.nvidia.com/metropolis/deepstream/dev-guide/text/DS_Quickstart.html#quickstart-guide)
2. Install Nvidia [Graph Composer](https://developer.nvidia.com/graph_composer-2.0.1_amd64.deb)

### Running:

```bash
$ USE_BAZEL_VERSION=4.2.2 registry repo sync -n ngc-public && bazelisk build -s ... 
```
