/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 16:11:58 by nrahali           #+#    #+#             */
/*   Updated: 2022/12/19 18:58:22 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.hpp"

int main(){
    Base *objN = generate();
    identify(objN);
    std::cout << std::endl;
    Base &ref = *objN;
    identify(ref);
    delete(objN);
    return (0);
}