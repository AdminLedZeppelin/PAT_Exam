//
//  TestApp.swift
//  Shared
//
//  Created by gg on 2021/8/15.
//

import SwiftUI

@main
struct TestApp: App {
    var body: some Scene {
        DocumentGroup(newDocument: TestDocument()) { file in
            ContentView(document: file.$document)
        }
    }
}
