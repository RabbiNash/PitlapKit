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
         url: "https://github.com/RabbiNash/PitlapKMM/releases/download/0.2.1/PitlapKit.xcframework.zip",
         checksum:"a02721889dc129fcc710ddcc182816015010aa25b39e8cc0aa287603fc8bce20")
   ]
)
