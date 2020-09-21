FROM centos:7

RUN yum update -y
RUN yum install -y wget vim
ENTRYPOINT ["ping", "-c", "3"]
CMD ["127.0.0.1"]