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
         url: "https://github.com/RabbiNash/PitlapKMM/releases/download/v0.0.1/PitlapKit.xcframework.zip",
         checksum:"66ce61d8e4f27cd4716b911594303c4ad7bb38128fe744b890dc0457d5bd033a")
   ]
)
