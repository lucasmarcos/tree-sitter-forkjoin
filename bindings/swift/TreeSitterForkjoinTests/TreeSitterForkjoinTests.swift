import XCTest
import SwiftTreeSitter
import TreeSitterForkjoin

final class TreeSitterForkjoinTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_forkjoin())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Forkjoin grammar")
    }
}
