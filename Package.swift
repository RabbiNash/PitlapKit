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
         url: "https://github.com/RabbiNash/PitlapKMM/releases/download/0.2.3/PitlapKit.xcframework.zip",
         checksum:"086f58ef1a7f92644fd561dfb719d99685d05959e6d8aa8a103f3b0ec2f4a02f")
   ]
)
