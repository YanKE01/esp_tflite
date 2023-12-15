idf_component_register(SRCS "mnist_model.cc" "mnist.cc"
                    INCLUDE_DIRS include
                    REQUIRES esp-tflite-micro)