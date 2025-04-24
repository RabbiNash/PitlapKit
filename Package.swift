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
         url: "https://github.com/RabbiNash/PitlapKMM/releases/download/0.2.5/PitlapKit.xcframework.zip",
         checksum:"895b35e009b98dfd2b7133d8a2c82c37c7a5e381072c4d0934e927bab50f3607")
   ]
)
