/**
 * Author: Mayan Bashan
 */

#include <string>
#include <map>

using namespace std;
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
//using namespace pandemic;
#include <set>

namespace pandemic{
        
        std::map<City, set<City>> Board::neighbors{
            {City::Algiers,{City::Madrid, City::Paris, City::Istanbul, City::Cairo}},
            {City::Atlanta,{City::Chicago, City::Miami, City::Washington}},
            {City::Baghdad,{City::Tehran, City::Istanbul, City::Cairo, City::Riyadh, City::Karachi}},
            {City::Bangkok,{City::Kolkata, City::Chennai, City::Jakarta, City::HoChiMinhCity, City::HongKong}},
            {City::Beijing,{City::Shanghai, City::Seoul}},
            {City::Bogota,{City::MexicoCity, City::Lima, City::Miami, City::SaoPaulo, City::BuenosAires}},
            {City::BuenosAires,{City::Bogota, City::SaoPaulo}},
            {City::Cairo,{City::Algiers, City::Istanbul, City::Baghdad, City::Khartoum, City::Riyadh}},
            {City::Chennai,{City::Mumbai, City::Delhi, City::Kolkata, City::Bangkok, City::Jakarta}},
            {City::Chicago,{City::SanFrancisco, City::LosAngeles, City::MexicoCity, City::Atlanta, City::Montreal}},
            {City::Delhi,{City::Tehran, City::Karachi, City::Mumbai, City::Chennai, City::Kolkata}},
            {City::Essen,{City::London, City::Paris, City::Milan, City::StPetersburg}},
            {City::HoChiMinhCity,{City::Jakarta, City::Bangkok, City::HongKong, City::Manila}},
            {City::HongKong,{City::Bangkok, City::Kolkata, City::HoChiMinhCity, City::Shanghai, City::Manila, City::Taipei}},
            {City::Istanbul,{City::Milan, City::Algiers, City::StPetersburg, City::Cairo, City::Baghdad, City::Moscow}},
            {City::Jakarta,{City::Chennai, City::Bangkok, City::HoChiMinhCity, City::Sydney}},
            {City::Johannesburg,{City::Kinshasa, City::Khartoum}},
            {City::Karachi,{City::Tehran, City::Baghdad, City::Riyadh, City::Mumbai, City::Delhi}},
            {City::Khartoum,{City::Cairo, City::Lagos, City::Kinshasa, City::Johannesburg}},
            {City::Kinshasa,{City::Lagos, City::Khartoum, City::Johannesburg}},
            {City::Kolkata,{City::Delhi, City::Chennai, City::Bangkok, City::HongKong}},
            {City::Lagos,{City::SaoPaulo, City::Khartoum, City::Kinshasa}},
            {City::Lima,{City::MexicoCity, City::Bogota, City::Santiago}},
            {City::London,{City::NewYork, City::Madrid, City::Essen, City::Paris}},
            {City::LosAngeles,{City::SanFrancisco, City::Chicago, City::MexicoCity, City::Sydney}},
            {City::Madrid,{City::London, City::NewYork, City::Paris, City::SaoPaulo, City::Algiers}},
            {City::Manila,{City::HongKong, City::Taipei, City::SanFrancisco, City::HoChiMinhCity, City::Sydney}},
            {City::MexicoCity,{City::LosAngeles, City::Chicago, City::Miami, City::Lima, City::Bogota}},
            {City::Miami,{City::Atlanta, City::MexicoCity, City::Washington, City::Bogota}},
            {City::Milan,{City::Essen, City::Paris, City::Istanbul}},
            {City::Montreal,{City::Chicago, City::Washington, City::NewYork}},
            {City::Moscow,{City::StPetersburg, City::Istanbul, City::Tehran}},
            {City::Mumbai,{City::Karachi, City::Delhi, City::Chennai}},
            {City::NewYork,{City::Montreal, City::Washington, City::London, City::Madrid}},
            {City::Osaka,{City::Taipei, City::Tokyo}},
            {City::Paris,{City::Algiers, City::Essen, City::Madrid, City::Milan, City::London}},
            {City::Riyadh,{City::Baghdad, City::Cairo, City::Karachi}},
            {City::SanFrancisco,{City::LosAngeles, City::Chicago, City::Tokyo, City::Manila}},
            {City::Santiago,{City::Lima}},
            {City::SaoPaulo,{City::Bogota, City::BuenosAires, City::Lagos, City::Madrid}},
            {City::Seoul,{City::Beijing, City::Shanghai, City::Tokyo}},
            {City::Shanghai,{City::Beijing, City::HongKong, City::Taipei, City::Seoul, City::Tokyo}},
            {City::StPetersburg,{City::Essen, City::Istanbul, City::Moscow}},
            {City::Sydney,{City::Jakarta, City::Manila, City::LosAngeles}},
            {City::Taipei,{City::Shanghai, City::HongKong, City::Osaka, City::Manila}},
            {City::Tehran,{City::Baghdad, City::Moscow, City::Karachi, City::Delhi}},
            {City::Tokyo,{City::Seoul, City::Shanghai, City::Osaka, City::SanFrancisco}},
            {City::Washington,{City::Atlanta, City::NewYork, City::Montreal, City::Miami}}
        };
        
        std::map<City, Color> Board::city_color{
            {City::Algiers,Color::Black},
            {City::Atlanta,Color::Blue},
            {City::Baghdad,Color::Black},
            {City::Bangkok,Color::Red},
            {City::Beijing,Color::Red},
            {City::Bogota,Color::Yellow},
            {City::BuenosAires,Color::Yellow},
            {City::Cairo,Color::Black},
            {City::Chennai,Color::Black},
            {City::Chicago,Color::Blue},
            {City::Delhi,Color::Black},
            {City::Essen,Color::Blue,},
            {City::HoChiMinhCity,Color::Red},
            {City::HongKong,Color::Red},
            {City::Istanbul,Color::Black},
            {City::Jakarta,Color::Red},
            {City::Johannesburg,Color::Yellow},
            {City::Karachi,Color::Black},
            {City::Khartoum,Color::Yellow},
            {City::Kinshasa,Color::Yellow},
            {City::Kolkata,Color::Black},
            {City::Lagos,Color::Yellow},
            {City::Lima,Color::Yellow},
            {City::London,Color::Blue},
            {City::LosAngeles,Color::Yellow,},
            {City::Madrid,Color::Blue},
            {City::Manila,Color::Red},
            {City::MexicoCity,Color::Yellow},
            {City::Miami,Color::Yellow},
            {City::Milan,Color::Blue},
            {City::Montreal,Color::Blue},
            {City::Moscow,Color::Black},
            {City::Mumbai,Color::Black},
            {City::NewYork,Color::Blue},
            {City::Osaka,Color::Red},
            {City::Paris,Color::Blue},
            {City::Riyadh,Color::Black},
            {City::SanFrancisco,Color::Blue},
            {City::Santiago,Color::Yellow},
            {City::SaoPaulo,Color::Yellow},
            {City::Seoul,Color::Red},
            {City::Shanghai,Color::Red},
            {City::StPetersburg,Color::Blue},
            {City::Sydney,Color::Red},
            {City::Taipei,Color::Red},
            {City::Tehran,Color::Black},
            {City::Tokyo,Color::Red},
            {City::Washington,Color::Blue}
	    };

        // std::set<City> Board::research_stations{};

        // std::set<Color> Board::cured_colors{};

        //std::map<City, int> Board::desease_cubes{};

    int& Board::operator[](City city){
        return desease_cubes[city];
    }
    bool Board::is_clean(){
        for (auto const& c : this->desease_cubes){
            if (c.second > 0){
                return false;
            }
        }
        return true;
    }
    void Board::remove_cures(){
        this->cured_colors.clear();
    }
    ostream& operator <<(ostream& output, const Board& board){
        output << board.cured_colors.size() << " cures discovered" << " | " << board.research_stations.size() << " research stations | ";
        return output;
    }
}

        