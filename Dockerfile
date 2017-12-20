FROM gcc:5
COPY . /usr/src
WORKDIR /usr/src
RUN make
RUN make test
CMD ["./oTravis"]
