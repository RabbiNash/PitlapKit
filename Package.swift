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
         url: "https://github.com/RabbiNash/PitlapKMM/releases/download/0.2.4/PitlapKit.xcframework.zip",
         checksum:"4adc683e49af78ce72a1e3b71b5e06527ba3daa62fc1299f4bf5739e067b99af")
   ]
)
