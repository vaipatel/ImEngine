#ifndef VERTEX_H
#define VERTEX_H

#include <array>
#include <glm/glm.hpp>

namespace blithe
{
    /*!
     * \brief Represents a vertex with position, color and texture coordinate information.
     */
    struct Vertex
    {
        static constexpr size_t s_N_POS_COMPONENTS = 3;   //!< Num of position components
        static constexpr size_t s_N_COLOR_COMPONENTS = 4; //!< Num of color components
        static constexpr size_t s_N_TEX_COMPONENTS = 2;   //!< Num of texture components

        glm::vec3 m_pos;       //!< Position Coordinates
        glm::vec4 m_color;     //!< Color
        glm::vec2 m_texCoords; //!< Texture Coordinates

        /*!
         * \brief Helper to get the number of components for each attribute. Each component is
         *        a float.
         *
         * \return Number of components for each attribute of any vertex
         */
        static std::array<size_t, 3> GetNumComponentsPerAttribute()
        {
            std::array<size_t, 3> numComponentsPerAttr = { s_N_POS_COMPONENTS, s_N_COLOR_COMPONENTS, s_N_TEX_COMPONENTS };
            return numComponentsPerAttr;
        }
    };
}

#endif // VERTEX_H
