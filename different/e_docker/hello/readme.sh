
sudo ./clean.sh 
# Create image
sudo docker build -t  docker_hello .
# Create container
sudo docker create -t --name=c_hello docker_hello
sudo docker start c_hello
