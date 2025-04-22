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
         url: "https://github.com/RabbiNash/PitlapKMM/releases/download/0.2.2/PitlapKit.xcframework.zip",
         checksum:"0b0c2e4cbd3637df044e6477581c0216a79616c1508e583abec7bdf4a019cd92")
   ]
)
