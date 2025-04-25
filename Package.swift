// swift-tools-version:5.3
import PackageDescription

let package = Package(
   name: "PitlapKit",
   platforms: [
     .iOS(.v14),
   ],
   products: [
      .library(name: "PitlapKit", targets: ["PitlapKit"])
   ],
   targets: [
      .binaryTarget(
         name: "PitlapKit",
         url: "https://github.com/RabbiNash/PitlapKMM/releases/download/0.2.6/PitlapKit.xcframework.zip",
         checksum:"26a582b2c588edbc714eee8d0996a2c4d9c1fb3d73af8987938135adf8f28fff")
   ]
)
