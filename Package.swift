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
         url: "https://github.com/RabbiNash/PitlapKMM/releases/download/0.2.8/PitlapKit.xcframework.zip",
         checksum:"2f751abfcf49f8bb083997feb62d8e174c0a1ab9f92f73c01e9f59306ed6bb56")
   ]
)
