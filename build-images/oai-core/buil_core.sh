
# from the directory: /home/henok/blockchain-oai-ntn/oai-cn5g-fed/build-images/oai-core/component

sudo docker build --tag oai-upf:v1.1.0 --file docker/Dockerfile.upf.ubuntu --build-arg BASE_IMAGE=ubuntu:jammy .

sudo docker build --tag oai-smf:v2.0.1 --file docker/Dockerfile.smf.ubuntu --build-arg BASE_IMAGE=ubuntu:jammy .

sudo docker build --tag oai-udr:v2.0.1 --file docker/Dockerfile.udr.ubuntu --build-arg BASE_IMAGE=ubuntu:jammy .

sudo docker build --tag oai-udm:v2.0.1 --file docker/Dockerfile.udm.ubuntu --build-arg BASE_IMAGE=ubuntu:jammy .

sudo docker build --tag oai-ausf:v2.0.1 --file docker/Dockerfile.ausf.ubuntu --build-arg BASE_IMAGE=ubuntu:jammy .


# tag deployed image and push to dockerhub

sudo docker login
sudo docker tag oai-amf:v2.0.1 henok28/oai-amf:v2.0.1
sudo docker push henok28/oai-amf:v2.0.1