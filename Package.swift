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
         url: "https://github.com/RabbiNash/PitlapKMM/releases/download/0.2.0/PitlapKit.xcframework.zip",
         checksum:"3480348c8e1a2d813630915ef2f972ff36ed5d0dee9e2d8436293e9e8c2b07fc")
   ]
)
