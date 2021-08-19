//
//  ContentView.swift
//  Shared
//
//  Created by gg on 2021/8/15.
//

import SwiftUI

struct ContentView: View {
    @Binding var document: TestDocument

    var body: some View {
        TextEditor(text: $document.text)
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView(document: .constant(TestDocument()))
    }
}
