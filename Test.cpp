/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Please write your names here>
 * 
 * Date: 2020-02
 */

#include "doctest.h"
#include "Board.hpp"
using namespace ariel;

#include <string>
using namespace std;


TEST_CASE("just a test") {
    Board board;
    CHECK_NOTHROW(board.post(100,200,Direction::Horizontal,"abcd"));
    /* Picture */
    // CHECK_NOTHROW(board.post(0,0,Direction::Horizontal,"                                .---::-.                         "));
    // CHECK_NOTHROW(board.post(1,0,Direction::Horizontal,"                         .:+yhdmmmmmmmmmmdy+-                    "));
    // CHECK_NOTHROW(board.post(2,0,Direction::Horizontal,"                     -:sdmmmmmmddddddmmmmmmmmds+-                "));
    // CHECK_NOTHROW(board.post(3,0,Direction::Horizontal,"                   -ymmmddddddddhhhhhddddddmmdmmmds-             "));
    // CHECK_NOTHROW(board.post(4,0,Direction::Horizontal,"                -/hmdhhyyhhyyysssooosyhhddddddddmmNmh:           "));
    // CHECK_NOTHROW(board.post(5,0,Direction::Horizontal,"               -ymds+/:::::::--.....-:/osyyhhhhhddmmNNd+-        "));
    // CHECK_NOTHROW(board.post(6,0,Direction::Horizontal,"              :yyo:....``..`..```````...--:////ossyhdmNNh.       "));
    // CHECK_NOTHROW(board.post(7,0,Direction::Horizontal,"             :s/-.....................-----------://ohmNmh-      "));
    // CHECK_NOTHROW(board.post(8,0,Direction::Horizontal,"            -s/...............-----.----------:------:sdmmo      "));
    // CHECK_NOTHROW(board.post(9,0,Direction::Horizontal,"            -/...........----------------::::::------.-+hNm-     "));
    // CHECK_NOTHROW(board.post(10,0,Direction::Horizontal,"           .+-........-------:::-----::::/::::::------.-ohms     "));
    // CHECK_NOTHROW(board.post(11,0,Direction::Horizontal,"           //-.....--........-------:::::::/:::::-------+sdm-    "));
    // CHECK_NOTHROW(board.post(12,0,Direction::Horizontal,"          .+:-.........-::---:::----::::::::::::::------+shd.    "));
    // CHECK_NOTHROW(board.post(13,0,Direction::Horizontal,"          :/:-.....-:+syyyssooo+::::/++oosoo+/::--------+oyd-    "));
    // CHECK_NOTHROW(board.post(14,0,Direction::Horizontal,"         -/++..--::++++/++osssyo++++osssyyyyyhyo/:-----:+/oy.    "));
    // CHECK_NOTHROW(board.post(15,0,Direction::Horizontal,"         .:+/.-:/:/+++/+oyssoooooooooooooo+/++oo++---..:++/s-    "));
    // CHECK_NOTHROW(board.post(16,0,Direction::Horizontal,"         oss/.-//:/+oohddddyss++/:/++osyyys+osoo+/::-..:++:s-    "));
    // CHECK_NOTHROW(board.post(17,0,Direction::Horizontal,"       -.+yy+-:/::/osshdddhysos:--:oooyhddddhysoo+/::-./+/oy:    "));
    // CHECK_NOTHROW(board.post(18,0,Direction::Horizontal,"      ::-+oo:--:::/+oosyyyysoo:``..:h+yhdhdmmshys/-::--o++my-    "));
    // CHECK_NOTHROW(board.post(19,0,Direction::Horizontal,"     :+/.:yy:----::/++++++///-....--ooosyhhyyooo+///:-/ysohs-    "));
    // CHECK_NOTHROW(board.post(20,0,Direction::Horizontal,"      :/.ohy:.....--::::--:-......---///+++ooo+//:/:-:shhs+++:   "));
    // CHECK_NOTHROW(board.post(21,0,Direction::Horizontal,"      .:+hhy-....---:::::--.....------://///+++/-----+yys+/++:   "));
    // CHECK_NOTHROW(board.post(22,0,Direction::Horizontal,"       :hhdy---.--:/+++/:-..``.----..-:/+////::-..---+yyso/s+.   "));
    // CHECK_NOTHROW(board.post(23,0,Direction::Horizontal,"       :hdmh+/:-://oo+/::/+oo/-:::/::--/+oo++/:-..-:/shhyy/s.    "));
    // CHECK_NOTHROW(board.post(24,0,Direction::Horizontal,"       .hdmmso+//oyhyyso++sshdyosyhhys+//osso+/:::::+ddhds+-     "));
    // CHECK_NOTHROW(board.post(25,0,Direction::Horizontal,"      .sdmNNhho/oddhdddhyyhdhddddddhdhssooyso+++/+++ymmhyo-      "));
    // CHECK_NOTHROW(board.post(26,0,Direction::Horizontal,"      -shmNmmhhsymddhdyhyhyhhdhhdmmdmdddhhhhso++osyydmmyy:       "));
    // CHECK_NOTHROW(board.post(27,0,Direction::Horizontal,"       +hymmmddysdmdhyhyo/+++oyyddddmdmmmmdmhsossydmmmmo-        "));
    // CHECK_NOTHROW(board.post(28,0,Direction::Horizontal,"       -oymmmdhdssdso/oyhhdhysyhyyddhhddmmmmdyhhyhmmmmd.         "));
    // CHECK_NOTHROW(board.post(29,0,Direction::Horizontal,"        -ymmNmdhysho/+///oyhdddddddhyyyhmNNmhdmdhmmNNm/-         "));
    // CHECK_NOTHROW(board.post(30,0,Direction::Horizontal,"        :ymmmmmdysys//+///+ooosoosooosyyhddddmNmmNNNmd-          "));
    // CHECK_NOTHROW(board.post(31,0,Direction::Horizontal,"        +hdmmmmdyhsoo/:/oosssssssyyyyhhyyhhdNNNNNNNNmh           "));
    // CHECK_NOTHROW(board.post(32,0,Direction::Horizontal,"        /hhhmmmmddhso/--::+osssysyyhhyhhhdmmNNNNNNNmy.           "));
    // CHECK_NOTHROW(board.post(33,0,Direction::Horizontal,"        +yshmmNmmmmho:.-``-///:+:ooyyoydddmmmNNNNNd+.            "));
    // CHECK_NOTHROW(board.post(34,0,Direction::Horizontal,"     .-odssddmmmmmdho+-.`.:/:.---/sysysdmmmmmNNNmy.              "));
    // CHECK_NOTHROW(board.post(35,0,Direction::Horizontal," ..:/ydmm+ohmmdddsysyo/.`.-:-:.:-/yysyyNNNNNdmmmh.`              "));
    // CHECK_NOTHROW(board.post(36,0,Direction::Horizontal,"ydhddmdmd-/shhyyhhhyhyoo:.+//+/o+/syhdmNNNNNdmdd- h+.            "));
    // CHECK_NOTHROW(board.post(37,0,Direction::Horizontal,"NNNmmmmmm.+soydsssoossyoo:s+/oo+ooyNmdmNNNNNmmy-  hNd:.          "));
    // CHECK_NOTHROW(board.post(38,0,Direction::Horizontal,"NNNNNmNmh+:oooyyyhssohh+syy+oyyyhydNmNmNNNmmdo`   yNNNdo-.       "));
    // CHECK_NOTHROW(board.post(39,0,Direction::Horizontal,"NNNNNmmhyo-/+/odhyyhyysssssssyyyhdmmNNNmNmmy-     yNmNNNNdyo/-.. "));
    // CHECK_NOTHROW(board.post(40,0,Direction::Horizontal,"NNNNNmddhy`::/+yyhhhyyossso/sssosdmdmNNmmy:`      dNmNNNNNNNNNNdy"));
    // CHECK_NOTHROW(board.post(41,0,Direction::Horizontal,"NNNNNmmNmm-/:++osyyhdhyoyssssysohhhdmNNmy-       -NNNNNNNNNNNNMMM"));
    // CHECK_NOTHROW(board.post(42,0,Direction::Horizontal,"NNNNNNNNmmo:sdyyyhhhhhhhyyyydmddhddmmmds.        yNNNNNNNNNNNNMMM"));
    // CHECK_NOTHROW(board.post(43,0,Direction::Horizontal,"NNNNNNNNNNooddhhdhhdhyhhydhhdmddmddmmmmmy.      -NNNNNNNNNNNNNNMM"));
    // CHECK_NOTHROW(board.post(44,0,Direction::Horizontal,"NNNNNNNNNmyhddyyyhdhyhyyyhhhyhhhhdmmNNNNNm-     sNNNNNNNNNNNNNNNM"));
    // CHECK_NOTHROW(board.post(45,0,Direction::Horizontal,"NNNNNNNNNmdohdyysyhyhhyhdddddddmmmNNNNNNNmd.   `mNNNNNNNNNNNNNNNM"));
    // CHECK_NOTHROW(board.post(46,0,Direction::Horizontal,"NNNNNNNNNNhoyyhysydyydhdyhdmNdmNmmmmmmdysooo`  :NNNNNNNNNNNNNNNNN"));
    // CHECK_NOTHROW(board.post(47,0,Direction::Horizontal,"NNNNNNNNNNm/+syosyhhyhhhdhhdmddmmmmdhyso+/-./. +NNNNNNNNNNNNNNNNN"));
    // CHECK_NOTHROW(board.post(48,0,Direction::Horizontal,"NNNNNNNNNmN/:++/ooyhhdhhddddmmmmmmdhys+/-`  :/.yNNNNNNNNNNNNNNNNM"));
    // CHECK_NOTHROW(board.post(49,0,Direction::Horizontal,"NNNNNNNNNNM/://o/+osyhdddddmmmmmddyso/:.`  `:..yNNNNNNNNNMMNNNMMM"));
    // CHECK_NOTHROW(board.post(50,0,Direction::Horizontal,"NNNNNNNNNNN+-:/:/++::smmmNmmmmmyoso+:.``   ....hNNNNNNNMMMMMMMMMM"));
    // CHECK_NOTHROW(board.post(51,0,Direction::Horizontal,"NNNNNNNNNNNo--::/+/:-.dmmmNmNdy+:///-.`    .``.mNNNNNNMMMMMMMMMMM"));
    // CHECK_NOTHROW(board.post(52,0,Direction::Horizontal,"NNNNNNNNNNNy-::---:::-hdhmNmmyy///::.``   ````-NNNNNNNMMMMMMMMMMM"));
    // CHECK_NOTHROW(board.post(53,0,Direction::Horizontal,"NNNNNNNNNNNh-:--..-/.:dmmmmhyyd://:-.`    ```.:MNNNNNNMMMMMMMMMMM"));
    // board.show();
    /* Add more checks here */
}

TEST_CASE("equal") {
    Board boardTwo;
    CHECK(boardTwo.read(1000000000, 200, Direction::Horizontal, 4) == string("____"));
    boardTwo.post(1000000000, 200, Direction::Horizontal, "abcd");
    CHECK(boardTwo.read(1000000000, 200, Direction::Horizontal, 4) == string("abcd"));
    boardTwo.post(1000000001, 201, Direction::Horizontal, "abcd");
    boardTwo.post(1000000002, 202, Direction::Horizontal, "abcd");
    boardTwo.post(1000000001, 202, Direction::Horizontal, "abcd");
    /* Demo example */
    Board BoardThree;
    BoardThree.post(100, 200, Direction::Horizontal, "abcd");
    CHECK(BoardThree.read(99, 201, Direction::Vertical, 3) == string("_b_"));
	BoardThree.post(99, 202, Direction::Vertical, "xyz");
    CHECK(BoardThree.read(100, 200, Direction::Horizontal, 6) == string("abyd__"));
    /* End Demo example */
    BoardThree.post(85, 190, Direction::Horizontal, "abcd");
    Board BoardFour;
    BoardFour.post(4294967294, 4294967294, Direction::Horizontal, "T");
    BoardFour.post(4294967293, 4294967293, Direction::Horizontal, "C");
    BoardFour.post(4294967292, 4294967292, Direction::Horizontal, "E");
    BoardFour.post(4294967291, 4294967291, Direction::Horizontal, "F");
    BoardFour.post(4294967290, 4294967290, Direction::Horizontal, "R");
    BoardFour.post(4294967289, 4294967289, Direction::Horizontal, "E");
    BoardFour.post(4294967288, 4294967288, Direction::Horizontal, "P");
    CHECK(BoardFour.read(4294967288, 4294967288, Direction::Vertical, 7) == string("P______"));
    CHECK(BoardFour.read(4294967288, 4294967289, Direction::Vertical, 7) == string("_E_____"));
    CHECK(BoardFour.read(4294967288, 4294967290, Direction::Vertical, 7) == string("__R____"));
    CHECK(BoardFour.read(4294967288, 4294967291, Direction::Vertical, 7) == string("___F___"));
    CHECK(BoardFour.read(4294967288, 4294967292, Direction::Vertical, 7) == string("____E__"));
    CHECK(BoardFour.read(4294967288, 4294967293, Direction::Vertical, 7) == string("_____C_"));
    CHECK(BoardFour.read(4294967288, 4294967294, Direction::Vertical, 7) == string("______T"));
    BoardFour.show();
}
/* Add more test cases here */