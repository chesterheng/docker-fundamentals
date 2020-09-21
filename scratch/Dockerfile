FROM alpine:3.8 AS build
RUN ["apk", "update"]
RUN ["apk", "add", "--update", "alpine-sdk"]
COPY sleep.c /
RUN ["gcc", "-static", "sleep.c", "-o", "sleep"]

FROM scratch
COPY --from=build /sleep /sleep
CMD ["/sleep"]
