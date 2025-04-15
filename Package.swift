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
         url: "https://github.com/RabbiNash/PitlapKMM/releases/download/0.1.2/PitlapKit.xcframework.zip",
         checksum:"49b86b6bdaf966fedbb2a1bf5ca0074ccf3e19df0b7f136f13101e2bf539f543")
   ]
)
