
#ifndef CONFIG_HPP
#define CONFIG_HPP
namespace Config
{
    const unsigned int square_sixe = 20; 
    const unsigned int horizontal_squares = 10;
    const unsigned int vertical_squares = 27;
    const unsigned int invisible_squares = 3;
    const unsigned int header_squares = 2;
    const unsigned int side_block_width = 8;
    const unsigned int complete_vertical_squares = vertical_squares + invisible_squares;
    const unsigned int display_width = square_sixe*horizontal_squares; 
    const unsigned int display_side_block_width = square_sixe*side_block_width; 
    const unsigned int display_heigth = square_sixe*(vertical_squares + header_squares + invisible_squares);
    const unsigned int display_header = square_sixe*(header_squares + invisible_squares);
    
    const unsigned int display_lost_message_width = 500; 
    const unsigned int display_lost_message_heigth = 200;
    
    const unsigned int next_piece_block_width = 6;
    const unsigned int next_piece_block_heigth = 7;
    const unsigned int display_next_piece_block_width = square_sixe*next_piece_block_width; 
    const unsigned int display_next_piece_block_heigth = square_sixe*next_piece_block_heigth; 
    const unsigned int next_piece_block_position_x = horizontal_squares + 1;
    const unsigned int next_piece_block_position_y = header_squares + invisible_squares + 3;
    const unsigned int display_next_piece_block_position_x = square_sixe*next_piece_block_position_x;
    const unsigned int display_next_piece_block_position_y = square_sixe*next_piece_block_position_y;

    const unsigned int scores[4] = {40, 100, 300, 1200};
    const float delays_for_level[4] = {0.48, 0.43, 0.38, 0.33};

    //------
    //|0|1|8|12|
    //|2|3|9|13|
    //|4|5|10|14|
    //|6|7|11|15|
    //------

    const unsigned int figures[7][4] = {
        0, 2, 4, 6, //I
        1, 2, 3, 4, //Z
        0, 2, 3, 5, //S
        0, 2, 4, 5, //L
        1, 2, 3, 5, //T
        0, 1, 2, 3, //O
        1, 3, 4, 5, //J
    };


};
#endif // CONFIG_HPP
