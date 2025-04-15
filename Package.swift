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
         url: "https://github.com/RabbiNash/PitlapKMM/releases/download/v0.1.0/PitlapKit.xcframework.zip",
         checksum:"b225ae5cc5724699123823ca7b53b86eef91938104cfd45e441e0db03c2437d3")
   ]
)
